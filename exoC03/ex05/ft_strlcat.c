/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:34:15 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/10 16:20:12 by gd-harco         ###   ########lyon.fr   */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	length_src;
	unsigned int	i_src;
	unsigned int	i_dest;
	unsigned int	flag;

	i_src = 0;
	flag = 0;
	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	i_dest = length_dest -1;
	while (i_src < size || src[i_src])
	{
		dest[i_dest] = src[i_src];
		i_src++;
		i_dest++;
		flag++;
	}
	if (flag == 0)
		return (size + length_src);
	return ((length_dest) + length_src);
}
