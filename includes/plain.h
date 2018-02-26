/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:18:08 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/26 21:32:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAIN_H
# define PLAIN_H

# include <vector.h>
# include <transform.h>

# define DEFAULT_COLOR 0x00008080

/*
** Vector array
** Color arra
** Transform
** Width
** Height
*/

typedef struct			s_plain
{
	t_vec3f				***va;
	t_transf			*tr;
	int					w;
	int					h;
	char				*file;
}						t_plain;

t_plain					*plain_parse_file(char *file);
t_plain					*parse_line(t_plain *pln, char *line, int row);
int						parse_color(char *word);

void					translate_plain(t_plain *pln, t_vec3f *pos);
void					rotate_plain(t_plain *pln, t_vec3f *rot);
void					scale_plain(t_plain *pln, t_vec3f *scl);
void					reset_plain(t_plain *pln);

t_plain					*get_plain(char *file, int w, int h);
void					del_plain(t_plain **pp, int row, int col);
void					print_plain(t_plain *pln);

#endif
