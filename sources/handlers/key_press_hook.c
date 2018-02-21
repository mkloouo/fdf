/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:18:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 17:55:23 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <keyboard.h>

int						key_press_hook(int btn, t_env *env)
{
	handle_key(btn, env);
	return (0);
}
