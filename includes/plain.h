/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:18:08 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:28:58 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAIN_H
# define PLAIN_H

# include <vector.h>
# include <transform.h>

# define DEFAULT_COLOR 0x0091278f

/*
 * Vector array
 * Color arra
 * Transform
 * Width
 * Height
 */

typedef struct			s_plain
{
	t_vec3f				***va;
	int					**ca;
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

t_plain					*get_plain(char *file, int w, int h);
void					del_plain(t_plain **pp);
void					print_plain(t_plain *pln);

int						get_preferred_width(t_plain *pln);
int						get_preferred_height(t_plain *pln);

#endif
