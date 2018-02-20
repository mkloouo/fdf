/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:20:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 01:22:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <keyboard.h>

void					handle_key(int btn, t_env *env)
{
	if (QUIT_BUTTON(btn))
		del_env(&env);
	else if (POSITION_BUTTON(btn))
	{
		position_plain(env->pln, btn);
		update_env(env);
		print_plain(env->pln);
	}
	else if (ROTATE_BUTTON(btn))
	{
		rotate_plain(env->pln, btn);
		update_env(env);
		print_plain(env->pln);
	}
	else if (SCALE_BUTTON(btn))
	{
		scale_plain(env->pln, btn);
		update_env(env);
		print_plain(env->pln);
	}
}