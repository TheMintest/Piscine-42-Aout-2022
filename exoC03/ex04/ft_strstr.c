/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:49:17 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/09 13:43:14 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	look_for_string(char *str, char *to_find, int i)
{
	int	p_source;
	int	p_to_find;

	p_to_find = 0;
	p_source = i;
	while (str[p_source] == to_find[p_to_find])
	{
		p_source++;
		p_to_find++;
		if (!to_find[p_to_find])
			return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	lenght_to_find;
	int	i;

	lenght_to_find = ft_strlen(to_find);
	i = 0;
	if (lenght_to_find != 0)
	{
		while (str[i])
		{
			if (str[i] == to_find[0])
				if (look_for_string(str, to_find, i))
					return (&str[i]);
		i++;
		}
		return (0);
	}
	else
		return (str);
}
