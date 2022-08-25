/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_parts2.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:40:50 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 22:40:51 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_NUMBER_PARTS2_H
# define PRINT_NUMBER_PARTS2_H

# include "print_final_number.h"
# include "../../header/bool.h"
# include "../../header/struct.h"
# include "../../header/string_42.h"
# include <stdlib.h>

t_bool	print_hundred(t_dictionary *data, char *key);
t_bool	print_tens_units(t_dictionary *data, char *key);
t_bool	print_number_1(t_dictionary *data, char *str);
t_bool	print_number_2(t_dictionary *data, char *str);
t_bool	print_number_3(t_dictionary *data, char *str);

#endif
