/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:39:13 by vfries            #+#    #+#             */
/*   Updated: 2022/08/20 13:44:40 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	error()
{
	write(1, "Error\n", 6);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
		return (error());
}
