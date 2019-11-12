/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:13:02 by exam              #+#    #+#             */
/*   Updated: 2019/11/05 12:14:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_MATE_H
# define CHECK_MATE_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_chess_piece
{
	int		x;
	int		y;
}				chess_piece;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

int     is_chess_piece(char c);
void    print_board(char **board);		// ---- Remove this ---- It's only to get a representation of the board
int		ft_abs(int a);
int		same_diagonal(int x1, int y1, int x2, int y2);
int		same_line(int x1, int y1, int x2, int y2);
int		check_queen(int x1, int y1, int x2, int y2);

#endif
