/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_button_press_hook.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 00:03:15 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 17:33:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>

int						mouse_button_press_hook(int btn, int x, int y,
t_env *env)
{
	set_vec2(env->ms->pv, x, y);
	set_vec2_c(env->ms->pv, btn);
	(void)env;
	return (0);
}
