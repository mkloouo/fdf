/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:42:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 23:34:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <stdio.h>

int						key_press(int btn, t_env *env)
{
	env->kb->ck = btn;
	if (SHIFT_BUTTON(btn))
		env->kb->shift_pressed = 1;
	else if (CTRL_BUTTON(btn))
		env->kb->ctrl_pressed = 1;
	else if (ALT_BUTTON(btn))
		env->kb->alt_pressed = 1;
	key_handler(env, KEY_PRESS);
	return (0);
}
