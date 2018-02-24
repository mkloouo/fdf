/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 11:23:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/23 23:34:57 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

void					reset_plain(t_plain *pln)
{
	if (pln && pln->tr)
	{
		set_vec3f(pln->tr->pos, DEFAULT_POSITION_X,
					DEFAULT_POSITION_Y, DEFAULT_POSITION_Z);
		set_vec3f(pln->tr->scl, DEFAULT_SCALE,
					DEFAULT_SCALE, DEFAULT_SCALE);
		set_vec3f(pln->tr->pos, DEFAULT_ROTATION_X,
					DEFAULT_ROTATION_Y, DEFAULT_ROTATION_Z);
	}
}
