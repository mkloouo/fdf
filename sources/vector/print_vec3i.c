/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_vec3i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 20:41:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/23 20:41:57 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <stdio.h>

void					print_vec3i(t_vec3i *v)
{
	if (v)
	{
		printf("vector:\n");
		printf("x: %d\ny: %dz: %d\n", v->x, v->y, v->z);
	}
}
