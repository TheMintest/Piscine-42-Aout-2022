/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozsahin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 10:47:38 by ozsahin           #+#    #+#             */
/*   Updated: 2022/08/07 10:09:20 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_first_line(int C)
{
	int	i;

	if (C == 1)
	{
		write(1, "A\n", 2);
	}
	else
	{
		i = 1;
		ft_putchar('A');
		i++;
		while (i < C)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	ft_print_middle_lines(int C)
{
	int	i;

	if (C == 1)
	{
		write(1, "B\n", 2);
	}
	else
	{
		i = 1;
		ft_putchar('B');
		i++;
		while (i < C)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	ft_print_final_line(int C)
{
	int	i;

	if (C == 1)
	{
		write(1, "C\n", 2);
	}
	else
	{
		i = 1;
		ft_putchar('C');
		i++;
		while (i < C)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int C, int L)
{
	int	current_line;

	if (C <= 0 || L <= 0)
	{
		return ;
	}
	current_line = 1;
	while (current_line == 1)
	{
		ft_print_first_line(C);
		current_line++;
	}
	while (current_line < L)
	{
		ft_print_middle_lines(C);
		current_line++;
	}
	while (current_line == L)
	{
		ft_print_final_line(C);
		current_line++;
	}
}
