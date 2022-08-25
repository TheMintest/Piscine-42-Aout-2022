/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_final_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:42:34 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 16:42:35 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "print_final_number.h"

char	*get_dictionary_content(t_dictionary *data, char *key)
{
	int	i;

	i = 0;
	while (data[i].key != NULL)
	{
		if (ft_strcomp(data[i].key, key))
			return (data[i].content);
		i++;
	}
	return (NULL);
}

int	only_zero(t_dictionary *data, char *str)
{
	int		i;
	char	*dictionary_content;

	i = 0;
	while (str[i])
		if (str[i++] != '0')
			return (2);
	dictionary_content = get_dictionary_content(data, "0");
	if (dictionary_content == NULL)
		return (1);
	ft_putstr(dictionary_content);
	ft_putchar('\n');
	return (0);
}

t_bool	free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
		free(strs[i++]);
	free(strs);
	return (TRUE);
}

t_bool	print_final_number(t_dictionary *data, char *str)
{
	int		i;
	char	**strs;

	if (only_zero(data, str) == 0)
		return (TRUE);
	else if (only_zero(data, str) == 1)
		return (FALSE);
	strs = get_strs(str);
	if (strs == NULL)
		return (FALSE);
	i = 0;
	while (strs[i] != NULL)
		i++;
	i--;
	while (i >= 0)
	{
		if (print_number_part(data, strs[i], i))
			return (FALSE);
		i--;
	}
	ft_putchar('\n');
	return (free_strs(strs));
}
