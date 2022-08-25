/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:09:50 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/09 11:09:52 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_checkboundary(int nb);

int	ft_checkboundary(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (ft_checkboundary (nb))
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-1 * nb);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + '0');
		}
		if (10 > nb && nb >= 0)
		{
			ft_putchar(nb + '0');
		}
	}	
}
