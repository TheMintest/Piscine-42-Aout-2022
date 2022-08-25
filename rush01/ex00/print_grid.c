/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:41:25 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/13 18:10:52 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int *str)
{
	int	i;

	i = 1;
	while (i < 5)
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
