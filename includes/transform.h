/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:19:42 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 00:45:43 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSFORM_H
# define TRANSFORM_H

# define DEFAULT_SCALE 5

# define DEFAULT_ROTATION_X 5
# define DEFAULT_ROTATION_Y 5
# define DEFAULT_ROTATION_Z 5

# define DEFAULT_POSITION_X 5
# define DEFAULT_POSITION_Y 5
# define DEFAULT_POSITION_Z 5

#include <vector.h>

/*
 * Position
 * Scale
 * Rotation
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
