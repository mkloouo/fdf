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

# define DEFAULT_X_ROT 60
# define DEFAULT_Y_ROT -40
# define DEFAULT_Z_ROT -10

# define DEFAULT_STEP 1
# define DEFAULT_Z_SCALE 10

typedef struct			s_plain
{
	t_list				*points;
	char				*file;
	int					width;
	int					height;
	int					mx;
	int					my;
	int					step;
	int					z_scale;
	int					rotx;
	int					roty;
	int					rotz;
}						t_plain;

t_plain					*get_plain_from_file(char *file_name);
t_plain					*parse_plain(t_plain *plain, int fd);
t_plain					*parse_line(t_plain *plain, char *line);

void					move_plain(t_plain *plain, int button);
void					zoom_plain(t_plain *plain, int button);
void					rotate_plain(t_plain *plain, int button);
void					z_scale_plain(t_plain *plain, int button);

int						get_color(char *color_line);
int						get_best_width(t_plain *plain);
int						get_best_height(t_plain *plain);

t_plain					*get_plain(t_list *lst, char *file, int width, int height);
void					delete_plain(t_plain **pp, char need_reverse);
void					print_plain(t_plain *plain);

#endif
