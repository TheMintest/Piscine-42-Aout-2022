/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:04:30 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/17 10:16:29 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(char str)
{
	int	value;

	value = 48;
	if (str <= 15)
	{
		ft_putchar('0');
		if (str <= 9)
			ft_putchar(str);
		else
			ft_putchar(str + 87);
	}
	if (str > 15)
	{
		ft_putchar('1');
		if (str <= 16)
			ft_putchar(str - 16);
		else
			ft_putchar((str - 16) + 87);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			print_hex(str[i]);
		}
		i++;
	}
}
