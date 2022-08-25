/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_parts.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:27:32 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 22:27:33 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_NUMBER_PARTS_H
# define PRINT_NUMBER_PARTS_H

# include "print_final_number.h"
# include "print_number_parts2.h"
# include "../../header/bool.h"
# include "../../header/struct.h"
# include "../../header/string_42.h"
# include <stdlib.h>

t_bool	print_big_number(t_dictionary *data, int i);
t_bool	print_number_part(t_dictionary *data, char *str, int i);

#endif
