/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:18:08 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 01:20:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAIN_H
# define PLAIN_H

# include <libft.h>

# define DEFAULT_X_ROTATE -45
# define DEFAULT_Y_ROTATE -130
# define DEFAULT_Z_ROTATE 45
# define DEFAULT_SCALE 10
# define DEFAULT_POSITION 10
# define DEFAULT_COLOR 0x00FFFFFF

typedef struct			s_plain
{
	t_list				*vecl;
	int					w;
	int					h;
	int					sx;
	int					sy;
	int					sz;
	int					px;
	int					py;
	int					rx;
	int					ry;
	int					rz;
}						t_plain;

t_plain					*get_plain_from_file(char *file);
t_plain					*parse_plain(t_plain *pln, int fd);
t_plain					*parse_line(t_plain *pln, char *line);
int						parse_color(char *data);

void					position_plain(t_plain *pln, int btn);
void					rotate_plain(t_plain *pln, int btn);
void					scale_plain(t_plain *pln, int btn);

t_plain					*get_plain(t_list *l, int w, int h);
void					del_plain(t_plain **pp, char to_reverse);
void					print_plain(t_plain *pln);

t_list					*get_vec_el(float x, float y, float z, int c);
void					print_vec_el(t_list *vec_el);
void					del_vec_el(void *vec_el, size_t size);

#endif
