/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 09:16:43 by exam              #+#    #+#             */
/*   Updated: 2019/10/15 10:14:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_first_time(char s, char *chars)
{
	int	i;

	i = 0;
	while(i < 96)
	{
		if (chars[i] == s)
			return (i);
		i++;
	}
	return (0);
}

void	resolve(char *s1, char *s2)
{
	char	c[96];
	int 	pos;
	char	*ptr;
	int		i;

	i = 31;
	while (i++ < 126)
		c[i - 32] = i;
	ptr = &(*s2);
	while(*s1)
	{
		pos = 0;
		s2 = &(*ptr);
		while(*s2)
		{
			if (*s1 == *s2 && (pos = is_first_time((*s1), c)))
			{
				ft_putchar(*s1);
				c[pos] = '\0';
				break ;
			}
			s2++;
		}
		s1++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		resolve(argv[1], argv[2]);
	}
	else
		ft_putchar('\n');
	return (0);
}
