/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:42:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/28 18:42:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>

int						key_press(int btn, t_env *env)
{
	env->kb->ck = btn;
	if (SHIFT_BUTTON(btn))
		env->kb->shift_pressed = 1;
	key_handler(env, KEY_PRESS);
	return (0);
}
