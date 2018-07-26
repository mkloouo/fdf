/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_transf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 02:27:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 02:57:27 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <transform.h>
#include <libft.h>

void					del_transf(t_transf **tp)
{
	del_vec3f(&(*tp)->pos);
	del_vec3f(&(*tp)->scl);
	del_vec3f(&(*tp)->rot);
	ft_memdel((void**)tp);
}
