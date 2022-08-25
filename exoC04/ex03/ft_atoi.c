/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:07:41 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/11 16:54:56 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	converted_value;

	converted_value = 0;
	i = 0;
	minus = 1;
	if (str[0] == 32 || (str[0] >= 9 && str[0] <= 13))
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			minus *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		converted_value = (converted_value * 10) + (str[i] - '0');
		i++;
	}
	return (converted_value * minus);
}
