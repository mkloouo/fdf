/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_plain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:30:26 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:31:19 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

void					translate_plain(t_plain *pln, t_vec3f *pos)
{
	t_vec3f				*lp;

	lp = pln->tr->pos;
	set_vec3f(lp, lp->x + pos->x, lp->z + pos->y, lp->z + pos->z);
}
