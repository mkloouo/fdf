/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_transf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 02:26:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 02:27:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <transform.h>

void					set_transf(t_transf *tr, t_vec3f *pos,
								   t_vec3f *scl, t_vec3f *rot)
{
	tr->pos = pos;
	tr->scl = scl;
	tr->rot = rot;
}
