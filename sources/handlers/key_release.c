/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_release.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:42:42 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/23 11:39:40 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>

int						key_release(int btn, t_env *env)
{
	env->kb->ck = btn;
	if (SHIFT_BUTTON(btn))
		env->kb->shift_pressed = 0;
	else if (CTRL_BUTTON(btn))
		env->kb->ctrl_pressed = 0;
	else if (ALT_BUTTON(btn))
		env->kb->alt_pressed = 0;
	key_handler(env, KEY_RELEASE);
	return (0);
}
