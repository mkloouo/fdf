/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perspective_3d_to_2d.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:56:36 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 18:10:28 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <math.h>

static void				init_data(float *data, t_plain *pln)
{
	data[0] = pln->rx * (float)(M_PI / 180.0);
	data[1] = pln->ry * (float)(M_PI / 180.0);
	data[2] = pln->rz * (float)(M_PI / 180.0);
	data[6] = sin(data[0]);
	data[7] = cos(data[0]);
	data[8] = sin(data[1]);
	data[9] = cos(data[1]);
	data[10] = sin(data[2]);
	data[11] = cos(data[2]);
}

t_vec2					*perspective_3d_to_2d(t_vec3 *v, t_plain *pln,
int i, int j)
{
	t_vec2				*p;
	float				data[12];

	init_data(data, pln);
	data[3] = v->x + (i * pln->sx);
	data[4] = v->y + (j * pln->sy);
	data[5] = v->z * pln->sz;
	p = get_vec2(((data[3] * data[9] - (data[5] * data[7] - data[4] *
		data[6]) * data[8]) * data[11] + (data[4] * data[7] +
		data[5] * data[6]) * data[10]), (((data[4] * data[7] +
		data[5] * data[6])) * data[7] - (data[3] * data[9] -
		(data[5] * data[7] - data[4] * data[6]) * data[8]) *
		data[10]), v->c);
	return (p);
}
