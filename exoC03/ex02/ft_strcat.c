/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:35:15 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/09 10:18:49 by gd-harco         ###   ########lyon.fr   */
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

char	*ft_strcat(char *dest, char *src)
{
	int	lsrc;
	int	ldest;
	int	i;

	i = 0;
	lsrc = (ft_strlen(src));
	ldest = (ft_strlen(dest));
	while (src[i])
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	return (dest);
}
