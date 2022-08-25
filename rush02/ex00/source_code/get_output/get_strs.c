/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_strs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:25:22 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 18:25:23 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_strs.h"

int	get_strs_size(char *str)
{
	int	len;
	int	size;

	len = ft_strlen(str);
	size = len / 3;
	if (len % 3 != 0)
		size++;
	return (size + 1);
}

char	*get_strs_str(char *str, int *b)
{
	int		i;
	int		a;
	char	*return_str;

	i = 0;
	while (*b > 0 && i < 3)
	{
		i++;
		*b = *b - 1;
	}
	return_str = malloc(sizeof(char) * (i + 1));
	if (return_str == NULL)
		return (NULL);
	a = 0;
	while (a < i)
	{
		return_str[a] = str[*b + a];
		a++;
	}
	return_str[a] = 0;
	return (return_str);
}

char	**free_all(char **strs, int i)
{
	int	a;

	a = 0;
	while (a < i)
		free(strs[a++]);
	free(strs);
	return (NULL);
}

char	**get_strs(char *str)
{
	char	**strs;
	int		strs_size;
	int		i;
	int		b;

	strs_size = get_strs_size(str);
	strs = malloc(sizeof(char *) * strs_size);
	if (strs == NULL)
		return (NULL);
	b = ft_strlen(str);
	i = 0;
	while (i < strs_size - 1)
	{
		strs[i] = get_strs_str(str, &b);
		if (strs[i] == NULL)
			return (free_all(strs, i));
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
