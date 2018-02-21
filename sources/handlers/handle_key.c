/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:20:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 17:30:43 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <keyboard.h>

void					handle_key(int btn, t_env *env)
{
	if (QUIT_BUTTON(btn))
		del_env(&env);
	if (POSITION_BUTTON(btn))
	{
		position_plain(env->pln, btn);
		update_env(env);
	}
	if (ROTATE_BUTTON(btn))
	{
		rotate_plain(env->pln, btn);
		update_env(env);
	}
	if (SCALE_BUTTON(btn))
	{
		scale_plain(env->pln, btn);
		update_env(env);
	}
}
