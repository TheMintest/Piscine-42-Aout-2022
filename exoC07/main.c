/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:01:22 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/16 16:21:08 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);


int main(int argc, char const *argv[])
{
	int	*table;
	int i;

	i = 0;
	table = (ft_range(10, 63));

	while (table[i])
	{
		printf("table[%d] = %d\n", i, table[i]);
		i++;
	}
	free(table);
	return 0;
}




int main(void)
{
	char *tab[4];

	tab[0] = "Hello";
	tab[1] = "There";
	tab[2] = "General";
	tab[3] = "kenobi";


	printf("%s", ft_strjoin(4, tab, " / "));
	return (0);
}
