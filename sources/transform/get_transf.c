/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_transf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 02:25:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/26 21:02:35 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <transform.h>
#include <libft.h>

t_transf				*get_transf(t_vec3f *pos, t_vec3f *scl, t_vec3f *rot)
{
	t_transf			*tr;

	if ((tr = (t_transf*)ft_memalloc(sizeof(t_transf))))
	{
		if (!pos)
			pos = get_vec3f(DEFAULT_POSITION_X, DEFAULT_POSITION_Y,
							DEFAULT_POSITION_Z);
		tr->pos = pos;
		if (!scl)
			scl = get_vec3f(DEFAULT_SCALE, DEFAULT_SCALE,
							DEFAULT_SCALE);
		tr->scl = scl;
		if (!rot)
			rot = get_vec3f(DEFAULT_ROTATION_X, DEFAULT_ROTATION_Y,
							DEFAULT_ROTATION_Z);
		tr->rot = rot;
		tr->z_scale = DEFAULT_Z_SCALE;
	}
	return (tr);
}
