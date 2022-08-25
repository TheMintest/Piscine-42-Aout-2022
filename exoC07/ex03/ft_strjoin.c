/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:27:35 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/24 16:14:28 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	add_sep(char *sep, char *joined, int k)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		joined[k] = sep[j];
		j++;
		k++;
	}
}

char	*joining(char **strs, char *joined, char *sep, int size)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			joined[k] = strs[i][j];
			j++;
			k++;
		}
		if (i < size - 1)
		{
			add_sep(sep, joined, k);
			k += ft_strlen(sep);
		}
		j = 0;
		i++;
	}
	joined[k] = '\0';
	return (joined);
}

int	get_strs_size(int size, char **strs)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 0;
	result = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			result++;
			j++;
		}
		j = 0;
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;

	if (size == 0)
		return ("");
	joined = (char *) malloc((sizeof(char) * \
		((get_strs_size(size, strs)) + ((ft_strlen(sep)) * (size - 1)) + 1)));
	return (joining(strs, joined, sep, size));
}

int main()
{
	char *strs[3];
	char *str;
	strs[0] = "coucou je suis le programme";
	strs[1] = "shalla je marche";
	strs[2] = "sinon c est chiant en vrai";
		str = ft_strjoin(3, strs, "||,/,/,/,/,/|| ");
	printf("%s\n",str);
	free(str);
}
