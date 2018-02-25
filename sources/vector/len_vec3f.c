/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_vec3f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 03:53:13 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 18:44:39 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <math.h>

float					len_vec3f(t_vec3f *v)
{
	return (sqrt(v->x * v->x + v->y * v->y + v->z * v->z));
}
