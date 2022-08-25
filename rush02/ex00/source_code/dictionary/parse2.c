/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:41:50 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/21 23:18:14 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/dictionary.h"

unsigned int	get_dict_length(char *str)
{
	unsigned int	nb_of_line;
	unsigned int	size_of_dictionary;

	if ((is_dictionary_to_norm(str) == 0))
		return (0);
	size_of_dictionary = 0;
	nb_of_line = 0;
	while (str[size_of_dictionary])
	{
		if (str[size_of_dictionary] == '\n')
			nb_of_line++;
		size_of_dictionary++;
	}
	return (nb_of_line);
}
