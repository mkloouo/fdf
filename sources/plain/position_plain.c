/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_plain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 23:20:40 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 16:52:45 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <keyboard.h>

void					position_plain(t_plain *pln, int btn)
{
	if (POSITION_UP(btn))
		pln->py -= DEFAULT_STEP;
	else if (POSITION_LEFT(btn))
		pln->px -= DEFAULT_STEP;
	else if (POSITION_DOWN(btn))
		pln->py += DEFAULT_STEP;
	else if (POSITION_RIGHT(btn))
		pln->px += DEFAULT_STEP;
}
