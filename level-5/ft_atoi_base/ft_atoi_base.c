/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 00:38:46 by esupatae          #+#    #+#             */
/*   Updated: 2019/11/14 00:38:54 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_ok_char(char c)
{
	static int	chrs[] = {0, 9, 10, 11, 12, 13, 32};
	int			i;

	i = 0;
	while (i++ < 7)
		if (c == (char)chrs[i - 1])
			return (1);
	return (0);
}

static int	is_valid_char(char c, size_t str_base)
{
	static char	*letters = "0123456789abcdef";
	size_t		i;

	i = 0;
	while (i++ < ft_strlen(letters))
		if (ft_tolower(c) == letters[i - 1])
			return (i);
	return (0);
}

int			ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	is_negative;
	int v;

	result = 0;
	is_negative = 1;
	while (is_ok_char(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			is_negative = -1;
	while (*str && (v = is_valid_char(*str++, str_base)))
		if ((v - 1) < str_base)
			result = (result * str_base) + (v - 1);
		else
			break;
	return (result * is_negative);
}