/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_plain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 23:21:00 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:06:19 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <keyboard.h>

void					rotate_plain(t_plain *pln, int btn)
{
	if (ROTATE_X(btn))
	{
		pln->rx += ROTATE_X_P(btn) ? 1 : -1;
		pln->rx = pln->rx % 360;
	}
	else if (ROTATE_Y(btn))
	{
		pln->ry += ROTATE_Y_P(btn) ? 1 : -1;
		pln->ry = pln->ry % 360;
	}
	else if (ROTATE_Z(btn))
	{
		pln->rz += ROTATE_Z_P(btn) ? 1 : -1;
		pln->rz = pln->rz % 360;
	}
}
