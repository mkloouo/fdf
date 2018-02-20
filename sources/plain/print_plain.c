/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:11:52 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <point.h>
#include <stdio.h>

void					print_plain(t_plain *plain)
{
	printf("plain:\nwidth: %d\nheight: %d\nmx: %d\nmy: %d\nstep: %d\n",
		   plain->width, plain->height, plain->mx,
		   plain->my, plain->step);
	printf("z_scale: %d\nrotx: %d\nroty: %d\nrotz: %d\n", plain->z_scale,
		   plain->rotx, plain->roty, plain->rotz);
//	ft_lstiter(plain->points, &print_point_el);
}
