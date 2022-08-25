/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_parts2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:36:15 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 21:36:17 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "print_number_parts2.h"

t_bool	print_hundred(t_dictionary *data, char *key)
{
	char	*content;

	content = get_dictionary_content(data, key);
	if (content == NULL)
		return (TRUE);
	ft_putstr(content);
	ft_putchar(' ');
	content = get_dictionary_content(data, "100");
	if (content == NULL)
		return (TRUE);
	ft_putstr(content);
	ft_putchar(' ');
	return (FALSE);
}

t_bool	print_tens_units(t_dictionary *data, char *key)
{
	char	*content;

	content = get_dictionary_content(data, key);
	if (content == NULL)
		return (TRUE);
	ft_putstr(content);
	ft_putchar(' ');
	return (FALSE);
}

t_bool	print_number_1(t_dictionary *data, char *str)
{
	if (str[0] != '0')
		if (print_tens_units(data, str))
			return (TRUE);
	return (FALSE);
}

t_bool	print_number_2(t_dictionary *data, char *str)
{
	char	*key;

	key = malloc(sizeof(char) * 3);
	if (key == NULL)
		return (TRUE);
	key[0] = str[0];
	key[1] = '0';
	key[2] = 0;
	if (str[0] != '0' && str[0] != '1')
		if (print_tens_units(data, key))
			return (TRUE);
	if (str[0] == '1')
		if (print_tens_units(data, str))
			return (TRUE);
	if (str[0] != '1' && str[1] != '0')
		if (print_tens_units(data, &str[1]))
			return (TRUE);
	free(key);
	return (FALSE);
}

t_bool	print_number_3(t_dictionary *data, char *str)
{
	char	*key;

	key = malloc(sizeof(char) * 4);
	if (key == NULL)
		return (TRUE);
	key[0] = str[0];
	key[1] = 0;
	if (str[0] != '0')
		if (print_hundred(data, key))
			return (TRUE);
	key[0] = str[1];
	key[1] = '0';
	key[2] = 0;
	if (str[1] != '0' && str[1] != '1')
		if (print_tens_units(data, key))
			return (TRUE);
	key[1] = str[2];
	if (str[1] == '1')
		if (print_tens_units(data, key))
			return (TRUE);
	if (str[1] != '1' && str[2] != '0')
		if (print_tens_units(data, &str[2]))
			return (TRUE);
	free(key);
	return (FALSE);
}
