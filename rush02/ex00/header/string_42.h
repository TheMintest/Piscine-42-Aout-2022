/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:08:35 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 23:09:11 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_42_H
# define STRING_42_H

# include "bool.h"

int		ft_strlen(char	*str);
void	ft_putstr(char *str);
t_bool	ft_strcomp(char *str1, char *str2);
void	ft_putchar(char c);
int	check_key(char *str, long int *i);
t_bool	check_spaces_after_key(char *str, long int *i);
t_bool	check_spaces_before_content(char *str, long int *i);
t_bool	check_content(char *str, long int *i);
unsigned int	is_dictionary_to_norm(char *str);

#endif
