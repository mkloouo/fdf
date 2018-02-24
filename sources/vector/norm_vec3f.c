/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_vec3f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 03:54:03 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/24 03:55:40 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

void					norm_vec3f(t_vec3f *v)
{
	int					len;
	int					inv_len;

	len = len_vec3f(v);
	if (len > 0)
	{
		inv_len = 1 / len;
		v->x *= inv_len;
		v->y *= inv_len;
		v->z *= inv_len;
	}
}
