/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_point_el.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:11:58 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <point.h>

void					delete_point_el(void *point_el, size_t size)
{
	t_point				*p;

	(void)size;
	if (point_el)
	{
		p = (t_point*)point_el;
		delete_point(&p);
	}
}