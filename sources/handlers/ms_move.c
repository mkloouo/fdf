/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:42:00 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:09:31 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>
#include <stdio.h>

int						ms_move(int x, int y, t_env *env)
{
	printf("mouse move: %dX%d\n", x, y);
	set_vec2i(env->ms->cv, x, y);
	mouse_handler(env);
	(void)env;
	return (1);
}
