/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_mouse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:12:59 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:29:01 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mouse.h>
#include <libft.h>

void					del_mouse(t_mouse **mp)
{
	del_vec2i(&(*mp)->pv);
	del_vec2i(&(*mp)->rv);
	del_vec2i(&(*mp)->cv);
	ft_memdel((void**)mp);
}
