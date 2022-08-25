/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_matrice_strs.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:04:53 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/23 16:13:46 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

get

void	translate_matrice_in_tabs(char *str)
{
	int	nb_line;
	int	i;

	i = 6;
	nb_line = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			nb_line++;
		i++;
	}
	printf("%d", nb_line);
	
}
