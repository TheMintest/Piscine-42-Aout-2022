/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number_in_arg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:40:31 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/20 22:07:22 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header/bool.h"

t_bool	check_number_in_arg(char *str)
{
	int	i;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (TRUE);
		i++;
	}
	return (FALSE);
}
