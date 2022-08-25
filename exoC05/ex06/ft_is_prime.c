/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:53:55 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/17 12:35:51 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	nb2;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	nb2 = nb;
	while ((i <= i * i) && (i * i <= nb2))
	{
		if (nb2 % i == 0 || nb2 % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}
