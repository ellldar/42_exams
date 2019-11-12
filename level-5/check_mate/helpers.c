/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:11:54 by exam              #+#    #+#             */
/*   Updated: 2019/11/05 11:57:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_mate.h"

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_putstr(char *s)
{
    while (*s)
        ft_putchar(*s++);
}

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int		is_chess_piece(char c)
{
	return (c == 'K' || c == 'Q' || c == 'B' || c == 'R' || c == 'P');
}

// ---- Remove this function ---- It's only to get a representation of the board
void	print_board(char **board)
{
	char	**ptr;
	char 	*row;

	ptr = board;
	while (*ptr)
	{
		row = *ptr;
		while(*row) {
			ft_putchar(*row);
			ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		ptr++;
	}
}

int		ft_abs(int a)
{
	return (a < 0 ? -a : a);
}

int		same_diagonal(int x1, int y1, int x2, int y2)
{
	int res;

	if (y2 != y1 && x2 != x1)
	{
		res = ft_abs((int)((x2 - x1) / (y2 - y1)));
		if (res == 1)
			return (1);
	}
	return (0);
}

int		same_line(int x1, int y1, int x2, int y2)
{
	if ((x1 == x2 && y1 != y2) || (x1 != x2 && y1 == y2))
		return (1);
	return (0);
}

int		check_queen(int x1, int y1, int x2, int y2)
{
	return (same_diagonal(x1, y1, x2, y2) || same_line(x1, y1, x2, y2));
}