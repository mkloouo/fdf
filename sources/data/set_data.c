/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 19:00:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:18:33 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <data.h>

void					set_data(t_data *d, t_point3 *p, int color)
{
	d->p = p;
	d->color = color;
}