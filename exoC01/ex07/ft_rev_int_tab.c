/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:54:00 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/07 12:49:22 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	backup;

	backup = *a;
	*a = *b;
	*b = backup;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	normal;
	int	reverse;

	normal = 0;
	reverse = size - 1;
	while (normal < size / 2)
	{
		ft_swap(&tab[normal], &tab[reverse]);
		normal++;
		reverse--;
	}
}
