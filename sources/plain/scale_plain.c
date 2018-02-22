/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 23:21:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:29:56 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

void					scale_plain(t_plain *pln, t_vec3f *scl)
{
	t_vec3f				*ls;

	ls = pln->tr->rot;
	set_vec3f(ls, ls->x + scl->x, ls->z + scl->y, ls->z + scl->z);
}
