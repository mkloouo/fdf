/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_btn_release.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:43:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:02:06 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>

int						ms_btn_release(int btn, int x, int y, t_env *env)
{
	set_vec2i(env->ms->rv, x, y);
	env->ms->btn = btn;
	env->ms->pressed = 0;
	return (0);
}
