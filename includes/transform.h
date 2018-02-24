/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 23:37:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 01:33:17 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSFORM_H
# define TRANSFORM_H

# define DEFAULT_SCALE 10

# define DEFAULT_ROTATION_X 0
# define DEFAULT_ROTATION_Y 0
# define DEFAULT_ROTATION_Z 0

# define DEFAULT_POSITION_X 0
# define DEFAULT_POSITION_Y 0
# define DEFAULT_POSITION_Z 0

# include <vector.h>

/*
** Position
** Scale
** Rotation
*/

typedef struct			s_transf
{
	t_vec3f				*pos;
	t_vec3f				*scl;
	t_vec3f				*rot;
}						t_transf;

t_transf				*get_transf(t_vec3f *pos, t_vec3f *scl, t_vec3f *rot);
void					set_transf(t_transf *tr, t_vec3f *pos,
									t_vec3f *scl, t_vec3f *rot);
void					del_transf(t_transf **tp);

void					print_transf(t_transf *tr);

#endif
