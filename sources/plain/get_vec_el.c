/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vec_el.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:52:23 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:06:49 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <vector.h>

t_list					*get_vec_el(float x, float y, float z, int c)
{
	t_list				*el;
	t_vec3				*v;

	el = NULL;
	if ((v = get_vec3(x, y, z, c)))
	{
		el = ft_lstnew(v, sizeof(t_vec3));
		del_vec3(&v);
	}
	return (el);
}
