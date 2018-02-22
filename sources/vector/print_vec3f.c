/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_vec3f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:13:54 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:14:27 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <stdio.h>

void					print_vec3f(t_vec3f *v)
{
	if (v)
	{
		printf("vector:\n");
		printf("x: %f\ny: %f\nz: %f\n", v->x, v->y, v->z);
	}
}
