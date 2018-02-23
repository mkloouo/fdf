/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 23:21:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/23 11:14:04 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

void					scale_plain(t_plain *pln, t_vec3f *scl)
{
	t_vec3f				*ls;

	ls = pln->tr->scl;
	set_vec3f(ls, ls->x + scl->x, ls->y + scl->y, ls->z + scl->z);
}
