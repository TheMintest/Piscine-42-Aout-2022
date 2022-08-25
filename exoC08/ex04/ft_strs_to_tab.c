/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 07:02:13 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/23 09:21:41 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	copy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (copy == NULL)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*full_tabs;

	i = 0;
	full_tabs = malloc(sizeof(t_stock_str) * (ac + 1));
	if (full_tabs == NULL)
		return (NULL);
	while (i < ac)
	{
		full_tabs[i].size = ft_strlen(av[i]);
		full_tabs[i].str = av[i];
		full_tabs[i].copy = ft_strdup(av[i]);
		i++;
	}
	full_tabs[i].str = 0;
	return (full_tabs);
}
