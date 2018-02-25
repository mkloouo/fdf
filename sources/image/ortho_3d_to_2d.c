/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ortho_3d_to_2d.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:40:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 16:44:15 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <math.h>

#define RAD 0.017453

static void				init_data(float *data, t_vec3f *rot)
{
	float				x_rad;
	float				y_rad;
	float				z_rad;

	x_rad = rot->x * RAD;
	y_rad = rot->y * RAD;
	z_rad = rot->z * RAD;
	data[3] = sin(x_rad);
	data[4] = cos(x_rad);
	data[5] = sin(y_rad);
	data[6] = cos(y_rad);
	data[7] = sin(z_rad);
	data[8] = cos(z_rad);
}

t_vec3i					*ortho_3d_to_2d(t_vec3f *v, t_plain *pln)
{
	t_vec3i				*p;
	float				data[9];

	init_data(data, pln->tr->rot);
	data[0] = v->x * pln->tr->scl->x;
	data[1] = v->y * pln->tr->scl->y;
	data[2] = v->z * pln->tr->scl->z;
	p = get_vec3i(((data[0] * data[6] - (data[2] * data[4] - data[1] *
		data[3]) * data[5]) * data[8] + (data[1] * data[4] +
		data[2] * data[3]) * data[7]), (((data[1] * data[4] +
		data[2] * data[3])) * data[4] - (data[0] * data[6] -
		(data[2] * data[4] - data[1] * data[3]) * data[5]) *
										data[7]), v->v);
	return (p);
}
