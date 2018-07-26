/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_keyboard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:10:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/28 18:42:21 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <keyboard.h>
#include <libft.h>

t_keyboard				*init_keyboard(void)
{
	t_keyboard			*kb;

	if ((kb = (t_keyboard*)ft_memalloc(sizeof(t_keyboard))))
	{
		kb->shift_pressed = 0;
		kb->ck = 0;
	}
	return (kb);
}
