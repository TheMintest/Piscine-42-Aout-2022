/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:06:24 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/18 12:49:30 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_for_base_error(char *base)
{
	int	i;
	int	current;

	i = 0;
	current = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[current])
	{
		while (i < current)
		{
			if ((base[i] == base[current]) \
				|| (base[current] == 43 || base[current] == 45))
				return (1);
			i++;
		}
		current++;
		i = 0;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_lenght;
	unsigned int	nbr2;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr2 = nbr * -1;
	}
	else
		nbr2 = nbr;
	if (check_for_base_error(base))
		return ;
	base_lenght = 0;
	while (base[base_lenght])
		base_lenght++;
	if (nbr2 >= base_lenght)
	{
		ft_putnbr_base((nbr2 / base_lenght), base);
		ft_putchar(base[nbr2 % base_lenght]);
	}
	else
		ft_putchar(base[nbr2]);
}
