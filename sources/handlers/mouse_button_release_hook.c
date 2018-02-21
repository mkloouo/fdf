/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_button_release_hook.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 00:03:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 17:34:04 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>

int						mouse_button_release_hook(int btn, int x, int y,
t_env *env)
{
	set_vec2(env->ms->rv, x, y);
	set_vec2_c(env->ms->rv, btn);
	handle_mouse(env);
	(void)env;
	return (0);
}
