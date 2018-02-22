/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_mouse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:12:59 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:21:38 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mouse.h>
#include <libft.h>

void					del_mouse(t_mouse **mp)
{
	del_vec2i(&(*mp)->pv);
	del_vec2i(&(*mp)->rv);
	ft_memdel((void**)mp);
}
