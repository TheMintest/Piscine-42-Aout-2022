/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:50:24 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/15 19:32:49 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_not_alpha(char current)
{
	if ((current >= 0 && current <= 47) \
				|| (current >= 123 && current <= 127) \
				|| (current >= 58 && current <= 64))
		return (1);
	else
		return (0);
}

int	is_uppercase(char current)
{
	if (current >= 65 && current <= 90)
		return (1);
	else
		return (0);
}

int	is_alpha(char current)
{
	if ((current >= 65 && current <= 90) \
				|| (current >= 97 && current <= 122))
		return (1);
	else
		return (0);
}

void	minimize_all(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_uppercase(str[i]))
			str[i] = str[i] + 32;
		else
			i++;
	}	
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0 ;
	minimize_all(str);
	while (i == 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
			i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (is_not_alpha(str[i - 1]))
			str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}
