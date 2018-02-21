/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 23:21:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 20:37:53 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <keyboard.h>

void					scale_plain(t_plain *pln, int btn)
{
	if (ZOOM(btn))
	{
		pln->sx += ZOOM_IN(btn) ? (1) : (-1);
		pln->sy += ZOOM_IN(btn) ? (1) : (-1);
		pln->sz += ZOOM_IN(btn) ? (1) : (-1);
	}
	else if (SCALE_X(btn))
		pln->sx += SCALE_X_P(btn) ? (1) : (-1);
	else if (SCALE_Y(btn))
		pln->sy += SCALE_Y_P(btn) ? (1) : (-1);
	else if (SCALE_Z(btn))
		pln->sz += SCALE_Z_P(btn) ? (1) : (-1);
}
