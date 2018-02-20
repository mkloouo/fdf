/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:17:52 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <stdio.h>

void					print_plain(t_plain *pln)
{
	printf("plain\n");
	printf(("\twidth: %d\n\theight: %d\n\tscale x: %d\n"
			"\tscale y: %d\n\tscale z: %d\n\tpos x: %d\n"
			"\tpos y: %d\n\trotate x: %d\n\trotate y: %d\n"
			"\trotate z: %d\n"),
		   pln->w, pln->h, pln->sx, pln->sy, pln->sz, pln->px,
		   pln->py, pln->rx, pln->ry, pln->rz);
}
