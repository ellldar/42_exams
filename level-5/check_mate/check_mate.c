/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:07:06 by exam              #+#    #+#             */
/*   Updated: 2019/11/05 12:14:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_mate.h"
#include <stdio.h>			// ---- Remove this ---- It's only to get a representation of the board

char	**init_empty_board(int	size)
{
	char	**ans;
	int		i;
	int		j;

	ans = (char**)malloc(sizeof(char*) * (size + 1));
	i = 0;
	while (i < size)
	{
		ans[i] = (char*)malloc(sizeof(char) * (size + 1));
		j = 0;
		while (j < size)
			ans[i][j++] = '.';
		ans[i][j] = '\0';
		i++;
	}
	ans[i] = NULL;
	return (ans);
}

int		check_two(char **board, int x1, int y1, int x2, int y2)
{
	int	step_x;
	int step_y;
	int x;
	int y;

	step_x = 0;
	step_y = 0;
	if (x1 != x2)
		step_x = (x2 > x1 && x2 != x1) ? 1 : -1;
	if (y2 != y1)
		step_y = (y2 > y1) ? 1 : -1;
	x = x1;
	y = y1;
	while (x != x2 || y != y2)
	{
		x += step_x;
		y += step_y;
		if (is_chess_piece(board[x][y]))
		{
			if (board[x][y] == 'K')
				return (1);
			else
				return (0);
		}
	}
	return (0);
}



int		analyze_board(char **board, int size, chess_piece king)
{
	int	i;
	int j;
	int res;

	i = 0;
	res = 0;
	while (i < size) {
		j = 0;
		while (j < size)
		{
			if (is_chess_piece(board[i][j]) && board[i][j] != 'K')
			{
				if (board[i][j] == 'P' && (i - 1 == king.x && (j - 1 == king.y || j + 1 == king.y)))
					res = 1;
				else if (board[i][j] == 'Q' && check_queen(i, j, king.x, king.y))
					res = check_two(board, i, j, king.x, king.y);
				else if (board[i][j] == 'B' && same_diagonal(i, j, king.x, king.y))
					res = check_two(board, i, j, king.x, king.y);
				else if (board[i][j] == 'R' && same_line(i, j, king.x, king.y))
					res = check_two(board, i, j, king.x, king.y);
				if (res)
					return (res);
			}
			j++;
		}
		i++;
	}
	return (res);
}

int		play_chess(int size, char **lines)
{
	chess_piece	king;
	char		**board;
	int			i;
	int			j;
	int			num;

	i = 0;
	num = 0;
	board = init_empty_board(size);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (is_chess_piece(lines[i][j]))
			{
				board[i][j] = lines[i][j];
				if (lines[i][j] == 'K')
				{
					king.x = i;
					king.y = j;
				}
			}
			j++;
		}
		i++;
	}
	print_board(board); // ---- Remove this ---- It's only to get a representation of the board
	return (analyze_board(board, size, king));
}

int		main(int argc, char **argv)
{
	int	res;

	if (argc > 1)
	{
		res = play_chess(argc - 1, (argv + 1));
		if (res)
			ft_putstr("Success");
		else
			ft_putstr("Fail");
	}
	ft_putstr("\n");
	return (0);
}
