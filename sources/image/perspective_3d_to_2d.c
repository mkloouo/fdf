/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perspective_3d_to_2d.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:56:36 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:19:07 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <math.h>

static void				init_data(float *data, t_vec3f *rot)
{
	data[0] = rot->x * (float)(M_PI / 180.0);
	data[1] = rot->y * (float)(M_PI / 180.0);
	data[2] = rot->z * (float)(M_PI / 180.0);
	data[6] = sin(data[0]);
	data[7] = cos(data[0]);
	data[8] = sin(data[1]);
	data[9] = cos(data[1]);
	data[10] = sin(data[2]);
	data[11] = cos(data[2]);
}

t_vec2i					*perspective_3d_to_2d(t_vec3f *v, t_transf *tv,
											  int row, int col)
{
	t_vec2i				*p;
	float				data[12];

	init_data(data, tv->rot);
	data[3] = v->x + (row * tv->scl->x);
	data[4] = v->y + (col * tv->scl->y);
	data[5] = v->z * tv->scl->z;
	p = get_vec2i(((data[3] * data[9] - (data[5] * data[7] - data[4] *
		data[6]) * data[8]) * data[11] + (data[4] * data[7] +
		data[5] * data[6]) * data[10]), (((data[4] * data[7] +
		data[5] * data[6])) * data[7] - (data[3] * data[9] -
		(data[5] * data[7] - data[4] * data[6]) * data[8]) *
		data[10]));
	return (p);
}
