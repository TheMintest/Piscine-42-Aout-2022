/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_matrice_in_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:23:52 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/24 10:59:29 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

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

char	*str_cat(char *dest, char *src)
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

char	*init_everything(char *str2, int *fd, int *read_output)
{
	char	*str1;

	if (*fd == -1)
		return (NULL);
	str1 = malloc(sizeof(char) * 100);
	if (str1 == NULL)
		return (NULL);
	*read_output = read(*fd, str1, 99);
	str1[*read_output] = 0;
	str2[0] = 0;
	return (str1);
}

char	*get_str_from_file(int fd)
{
	int		read_output;
	char	*final_str;
	char	temp_str[100];

	final_str = init_everything(temp_str, &fd, &read_output);
	if (final_str == NULL)
		return (NULL);
	while (read_output)
	{
		final_str = str_cat(final_str, temp_str);
		if (final_str == NULL)
			return (NULL);
		read_output = read(fd, temp_str, 99);
		temp_str[read_output] = 0;
	}
	final_str = str_cat(final_str, temp_str);
	if (final_str == NULL)
		return (NULL);
	return (final_str);
}

int	main()
{
	int 	file_descriptor;

file_descriptor = open("../example_file", O_RDONLY);
	get_str_from_file(file_descriptor);
	return 0;
}
