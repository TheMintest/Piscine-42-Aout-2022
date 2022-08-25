/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:28:14 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/23 16:12:40 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "header/bool.h"
#include "header/error_msg.h"

char	*get_str_from_file(int fd);
void	translate_matrice_in_tabs(char *str);

int	main(int argc, char **argv)
{
	int 	file_descriptor;
	int		i;
	int		*nb_line;
	char	**grid;


	i = 0;
	while (i < argc - 1)
	{
		file_descriptor = open(argv[1], O_RDONLY);
		translate_matrice_in_tabs(get_str_from_file(file_descriptor));
		i++;
	}
}
