/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableaux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:58:49 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/14 11:02:21 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>
//below is only for debug and should be deleted before push

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int *str)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		ft_putchar(str[i] + '0');
		ft_putchar(' ');
		i++;
	}
}

void	print_grid(int grid[4][4])
{
	int	r;

	r = 0;
	while (r <= 3)
	{
		ft_putstr(grid[r]);
		ft_putchar('\n');
		r++;
	}
}

void	ft_putchar(char c);
char	fetch_input_data(char str);
// void	print_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int		table[4][4];
	int		r;
	int		c;

	// table = (int**)malloc(sizeof(int)*4);
	(void) argc;
	r = 0;
	c = 0;
	while (r < 4)
	{
		// table[r] = malloc(sizeof(int) * 4);
		while (c < 4)
		{
			table[r][c] = c;
			c++;
		}
		c = 0;
		r++;
	}
	print_grid(table);
	return (0);
}
