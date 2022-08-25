/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_dictionary_in_str.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:01:45 by gd-harco          #+#    #+#             */
/*   Updated: 2022/08/21 23:36:08 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUT_DICTIONARY_IN_STR_H
# define PUT_DICTIONARY_IN_STR_H

unsigned int	str_len(char *str);
char			*str_dup(char *src);
char			*str_cat(char *dest, char *src);
char			*init_everything(char *str2, int *fd, int *read_output, char *file);
char			*get_str_from_file(char *file_name);

#endif
