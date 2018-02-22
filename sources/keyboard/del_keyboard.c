/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_keyboard.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:14:40 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:15:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <keyboard.h>
#include <libft.h>

void					del_keyboard(t_keyboard **kp)
{
	ft_memdel((void**)kp);
}
