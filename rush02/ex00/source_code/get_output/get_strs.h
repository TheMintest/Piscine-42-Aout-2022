/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_strs.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:24:59 by vfries            #+#    #+#             */
/*   Updated: 2022/08/21 22:25:01 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_STRS_H
# define GET_STRS_H

# include <stdlib.h>
# include "../../header/string_42.h"

int		get_strs_size(char *str);
char	*get_strs_str(char *str, int *b);
char	**free_all(char **strs, int i);
char	**get_strs(char *str);

#endif
