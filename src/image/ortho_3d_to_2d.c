/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ortho_3d_to_2d.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:40:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/26 21:01:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <math.h>

#define RAD 0.017453

#define SIN_X data[3]
#define COS_X data[4]
#define SIN_Y data[5]
#define COS_Y data[6]
#define SIN_Z data[7]
#define COS_Z data[8]

#define SCALED_X data[0]
#define SCALED_Y data[1]
#define SCALED_Z data[2]

static void				init_data(float *data, t_transf *tr, t_vec3f *v)
{
	float				x_rad;
	float				y_rad;
	float				z_rad;

	x_rad = tr->rot->x * RAD;
	y_rad = tr->rot->y * RAD;
	z_rad = tr->rot->z * RAD;
	data[0] = v->x * tr->scl->x;
	data[1] = v->y * tr->scl->y;
	data[2] = (v->z * tr->scl->z) * tr->z_scale;
	data[3] = sin(x_rad);
	data[4] = cos(x_rad);
	data[5] = sin(y_rad);
	data[6] = cos(y_rad);
	data[7] = sin(z_rad);
	data[8] = cos(z_rad);
	data[9] = SCALED_Z * COS_X - SCALED_Y * SIN_X;
	data[10] = SCALED_X * COS_Y - data[9] * SIN_Y;
	data[11] = SCALED_Y * COS_X + SCALED_Z * SIN_X;
}

t_vec3i					*ortho_3d_to_2d(t_vec3f *v, t_plain *pln)
{
	t_vec3i				*p;
	float				data[12];

	init_data(data, pln->tr, v);
	p = get_vec3i((data[10] * COS_Z + data[11] * SIN_Z),
					(data[11] * COS_Z - data[10] * SIN_Z), v->v);
	return (p);
}
