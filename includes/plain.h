/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:18:08 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:18:09 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAIN_H
# define PLAIN_H

# include <libft.h>

typedef struct			s_plain
{
	t_list				*points;
	int					width;
	int					height;
}						t_plain;

t_plain					*get_plain_from_file(char *file_name);
t_plain					*parse_plain(t_plain *plain, int fd);
t_plain					*parse_line(t_plain *plain, char *line);

int						get_color(char *color_line);

t_plain					*get_plain(t_list *lst, int width, int height);
void					delete_plain(t_plain **pp, char need_reverse);
void					print_plain(t_plain *plain);

#endif
