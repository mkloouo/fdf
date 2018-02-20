/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:18:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 01:21:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <keyboard.h>
#include <stdio.h>
int						key_press_hook(int btn, t_env *env)
{
	printf("button pressed: %d\n", btn);
//	print_plain(env->pln);
	handle_key(btn, env);
	return (0);
}
