/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_vec_el.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:47:22 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:13:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <vector.h>

void					del_vec_el(void *vec_el, size_t size)
{
	t_vec3				*v;

	(void)size;
	if (vec_el)
	{
		v = (t_vec3*)vec_el;
		del_vec3(&v);
	}
}
