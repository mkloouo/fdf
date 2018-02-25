/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 23:21:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 18:43:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <libft.h>

void					scale_plain(t_plain *pln, t_vec3f *scl)
{
	t_vec3f				*ls;

	ls = pln->tr->scl;
	if (ft_round(ls->x + scl->x) >= 0 &&
		ft_round(ls->y + scl->y) >= 0 &&
		ft_round(ls->z + scl->z) >= 0)
		set_vec3f(ls, ls->x + scl->x, ls->y + scl->y, ls->z + scl->z);
}
