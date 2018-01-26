/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:00:15 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:47:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAIN_H
# define PLAIN_H

# include <string.h>
# include <ft.h>
# include <data.h>

typedef struct			s_plain
{
	t_list				*data_list;
	size_t				width;
	size_t				height;
}						t_plain;

t_plain					*init_plain(t_list *data_list, size_t width, size_t height);
t_plain					*get_plain(char *file);

void					delete_plain(t_plain **pp);
void					print_plain(t_plain *p);

#endif
