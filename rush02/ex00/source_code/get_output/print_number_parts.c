/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_parts.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:26:06 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 19:26:07 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "print_number_parts.h"

t_bool	print_big_number(t_dictionary *data, int i)
{
	char	*key;
	int		size;
	char	*content;

	size = i * 3 + 2;
	key = malloc(sizeof(char) * size);
	if (key == NULL)
		return (TRUE);
	key[0] = '1';
	i = 1;
	while (i < size - 1)
		key[i++] = '0';
	key[size - 1] = 0;
	content = get_dictionary_content(data, key);
	if (content == NULL)
		return (TRUE);
	ft_putstr(content);
	ft_putchar(' ');
	return (FALSE);
}

t_bool	print_number_part(t_dictionary *data, char *str, int i)
{
	int	len;
	int	only_zeroes;

	len = ft_strlen(str);
	if (len == 3)
		if (print_number_3(data, str))
			return (TRUE);
	if (len == 2)
		if (print_number_2(data, str))
			return (TRUE);
	if (len == 1)
		if (print_number_1(data, str))
			return (TRUE);
	only_zeroes = 1;
	len = 0;
	while (str[len])
		if (str[len++] != '0')
			only_zeroes = 0;
	if (!only_zeroes && i > 0)
		print_big_number(data, i);
	return (FALSE);
}
