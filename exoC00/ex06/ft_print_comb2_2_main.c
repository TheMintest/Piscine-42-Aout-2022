/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:04:32 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/04 17:51:50 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void inc_nombre_droite(void);

void	ft_print_comb(void)
{
	char	d1;
	char	u1;
	char	d2;
	char	u2;

	d1 = '0';
	u1 = '0';
	d2 = '0';
	inc_nombre_droite();

}
void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_allchar(char w, char x, char y, char z)
{
	ft_putchar(w);
	ft_putchar(x);
	ft_putchar(' ');
	ft_putchar(y);
	ft_putchar(z);
}

void	inc_nombre_droite(void)
{
	%u2 = %u1 ++;
	while (u2 <= '9')
	{
		ft_allchar(d1, u1 d2, u2);
		u2++
	}
}


int	main()
{
	ft_print_comb();
}
