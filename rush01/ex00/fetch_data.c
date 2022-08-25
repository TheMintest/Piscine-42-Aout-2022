/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fetch_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:29:45 by adi-vito          #+#    #+#             */
/*   Updated: 2022/08/13 18:10:59 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	fetch_input_data(char **str)
{
	int	i;
	int	ctr[16];
	int	current_ctr;

	i = 0;
	current_ctr = 0;
	while (str[i])
	{
		ctr[current_ctr] = *str[i] - '0';
		i += 2;
		current_ctr++;
	}
	return (*ctr);
}
