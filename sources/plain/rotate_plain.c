/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_plain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 23:21:00 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:30:01 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

void					rotate_plain(t_plain *pln, t_vec3f *rot)
{
	t_vec3f				*lr;

	lr = pln->tr->rot;
	set_vec3f(lr, lr->x + rot->x, lr->z + rot->y, lr->z + rot->z);
}
