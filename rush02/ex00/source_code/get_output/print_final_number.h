/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_final_number.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:30:37 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 22:30:40 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_FINAL_NUMBER_H
# define PRINT_FINAL_NUMBER_H

# include <stdlib.h>
# include "get_strs.h"
# include "print_number_parts.h"
# include "../../header/bool.h"
# include "../../header/struct.h"
# include "../../header/string_42.h"

char	*get_dictionary_content(t_dictionary *data, char *key);
int		only_zero(t_dictionary *data, char *str);
t_bool	free_strs(char **strs);
t_bool	print_final_number(t_dictionary *data, char *str);

#endif
