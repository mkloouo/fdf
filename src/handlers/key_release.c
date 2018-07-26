/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_release.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:42:42 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/28 18:42:09 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>

int						key_release(int btn, t_env *env)
{
	env->kb->ck = btn;
	if (SHIFT_BUTTON(btn))
		env->kb->shift_pressed = 0;
	key_handler(env, KEY_RELEASE);
	return (0);
}
