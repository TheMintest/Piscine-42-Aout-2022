/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dictionay.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:09:33 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 23:24:09 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/bool.h"
#include "../../header/struct.h"
#include "../../header/dictionary.h"

//!temp
// 1 = saut de ligne, 0 = FALSE, -1 = TRUE
int	check_key(char *str, long int *i)
{
	if (str[*i] == '\n')
	{
		*i = *i + 1;
		return (1);
	}
	if (str[*i] < '0' || str[*i] > '9')
		return (-1);
	while (str[*i] >= '0' && str[*i] <= '9')
		*i = *i + 1;
	while (str[*i] && str[*i] != ':'
		&& (str[*i] != '\n'))
		*i = *i + 1;
	if (str[*i] == 0 || str[*i] == '\n')
		return (-1);
	return (0);
}

t_bool	check_spaces_after_key(char *str, long int *i)
{
	while (str[*i] && str[*i] == ' ')
		*i = *i + 1;
	if (str[*i] != ':')
		return (TRUE);
	*i = *i + 1;
	return (FALSE);
}

t_bool	check_spaces_before_content(char *str, long int *i)
{
	while (str[*i] && str[*i] == ' ')
		*i = *i + 1;
	if (str[*i] < 32 || str[*i] == 127)
		return (TRUE);
	return (FALSE);
}

t_bool	check_content(char *str, long int *i)
{
	while (str[*i] > 31 && str[*i] != 127)
		*i = *i + 1;
	if (str[*i] != 0 && str[*i] != '\n')
		return (TRUE);
	if (str[*i] == '\n')
		*i = *i + 1;
	return (FALSE);
}

unsigned int	is_dictionary_to_norm(char *str)
{
	long int	i;
	int			new_line;

	i = 0;
	while (str[i])
	{
		new_line = (check_key(str, &i));
		if (new_line == -1)
			return (0);
		else if (new_line == 0)
		{
			if (check_spaces_after_key(str, &i))
				return (0);
			if (check_spaces_before_content(str, &i))
				return (0);
			if (check_content(str, &i))
				return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	if (is_dictionary_to_norm(get_str_from_file("test.txt")))
// 		printf("TRUE");
// 	else
// 		printf("FALSE");
// }
