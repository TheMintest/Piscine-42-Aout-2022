/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:39:13 by vfries            #+#    #+#             */
/*   Updated: 2022/08/20 22:19:13 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#include "header/bool.h"
#include "header/struct.h"
#include "header/string_42.h"

int	error(int return_me)
{
	ft_putstr("Error\n");
	return (return_me);
}

int	dictionary_error(int return_me)
{
	ft_putstr("Dict Error\n");
	return (return_me);
}

int	check_input(int argc, char *argv[])
{
	char	*file_name;

	if (argc == 2)
	{
		if (check_number_in_arg(argv[1]))
			return (0);
		return (1);
	}
	else
	{
		if (check_number_in_arg(argv[2]))
			return (0);
		return (2);
	}
}

t_bool	call_print_final_number(t_dictionary *data, int argc, char *argv[])
{
	if (argc == 2)
		return (print_final_number(data, argv[1]));
	else
		return (print_final_number(data, argv[2]));
}

int	main(int argc, char *argv[])
{
	t_dictionary	*data;
	int				i;

	if (argc < 2 || argc > 3)
		return (error(1));
	i = check_input(argc, argv);
	if (i == 0)
		return (error(1));
	data = parse_dictionary(get_str_from_file(i));
	if (data == NULL)
		return (dictionary_error(1));
	if (!call_print_final_number(data, argc, argv))
		return (dictionary_error(1));
	return (0);
}
