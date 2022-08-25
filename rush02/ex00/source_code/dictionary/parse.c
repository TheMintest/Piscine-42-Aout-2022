/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:59:50 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/21 23:36:41 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../header/struct.h"
#include "../../header/bool.h"
#include "../../header/put_dictionary_in_str.h"

unsigned int	get_key_size(char *str, unsigned int curent_line)
{
	unsigned int	playhead;
	unsigned int	size;

	size = 0;
	playhead = 0;
	while ((str[playhead] >= 9 && str[playhead] <= 13) || str[playhead] == 32)
		playhead++;
	while (str[playhead] >= '0' && str[playhead] >= '9')
	{
		playhead++;
		size++;
	}
	return (size);
}

unsigned int	get_content_size(char *str, unsigned int curent_line)
{
	unsigned int	playhead;
	unsigned int	size;

	size = 0;
	playhead = 0;
	while (str[playhead] != ':')
		playhead++;
	while ((str[playhead] >= 9 && str[playhead] <= 13)
		|| str[playhead] == 32)
		playhead++;
	while ((str[playhead] >= 'A' && str[playhead] <= 'Z')
		|| (str[playhead] >= 'a' && str[playhead] <= 'z'))
	{
		playhead++;
		size++;
	}
	return (size);
}

char	*create_key(char *str, unsigned int curent_line)
{
	char			*key;
	unsigned int	nb_nl;
	unsigned int	i;
	unsigned int	playhead;

	playhead = 0;
	nb_nl = 0;
	i = 0;
	key = malloc(sizeof(char) * get_key_size(str, curent_line));
	while (nb_nl < curent_line)
	{
		if (str[playhead] == '\n')
			nb_nl++;
		playhead++;
	}
	while (str[playhead] >= '0' && str[playhead] <= '9')
	{
		key[i] = str[playhead];
		i++;
		playhead++;
	}
	key[i] = '\0';
	return (key);
}

char	*create_content(char *str, unsigned int curent_line)
{
	char			*content;
	unsigned int	nb_nl;
	unsigned int	i;
	unsigned int	playhead;

	playhead = 0;
	nb_nl = 0;
	i = 0;
	content = malloc(sizeof(char) * get_content_size(str, curent_line));
	while (nb_nl < curent_line)
	{
		if (str[playhead] == '\n')
			nb_nl++;
		playhead++;
	}
	while ((str[playhead] < 'A') || (str[playhead] > 'Z' && str[playhead] < 'a')
		|| (str[playhead]) > 'z')
		playhead++;
	while ((str[playhead] >= 'A' && str[playhead] <= 'Z')
		|| (str[playhead] >= 'a' && str[playhead] <= 'z'))
		content[i++] = str[playhead++];
	content[i] = '\0';
	return (content);
}

t_dictionary	*parse_dictionary(char *str)
{
	t_dictionary	*data;
	unsigned int	size_of_dictionary;
	unsigned int	nb_of_line;
	unsigned int	curent_line;
	char			*temp_tab;

	curent_line = 0;
	nb_of_line = get_dict_length(str);
	if (nb_of_line == 0)
		return (NULL);
	data = malloc(sizeof(t_dictionary) * nb_of_line);
	if (data == NULL)
		return (NULL);
	while (curent_line < nb_of_line)
	{
		data[curent_line].key
			= malloc(sizeof(char) * get_key_size(str, curent_line));
		if (data[curent_line].key == NULL)
			return (NULL);
		temp_tab = create_key(str, curent_line);
		data[curent_line].key = temp_tab;
		free(temp_tab);
		data[curent_line].content
			= malloc(sizeof(char) * get_content_size(str, curent_line));
		if (data[curent_line].content == NULL)
			return (NULL);
		temp_tab = create_content(str, curent_line);
		data[curent_line].content = temp_tab;
		free(temp_tab);
		curent_line++;
	}
	data[curent_line].key = NULL;
	data[curent_line].content = NULL;
	return (data);
}
// #include <stdio.h>
// int main(void)
// {
// 	t_dictionary	*data;
// 	unsigned int	i;

// 	i = 0;
// 	data = parse_dictionary("0 : zero\n1 : one\n2 : two\n");
// 	while (data[i].key != NULL)
// 	{
// 		printf("data %d = %s, content %d = %s\n", i, data[i].key, i, data[i].content);
// 		i++;
// 	}
// 	return (0);
// }
