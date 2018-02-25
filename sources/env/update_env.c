/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:47:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 20:15:49 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>

static void				draw_menu(t_env *env)
{
	t_vec2i				p;

	set_vec2i(&p, 10, 10);
	draw_string(env, &p, 0x004cb097, "Menu:");
	set_vec2i(&p, 10, 30);
	draw_string(env, &p, 0x0054b0b0, "WASD/Arrows to move");
	set_vec2i(&p, 10, 50);
	draw_string(env, &p, 0x0054b0b0, "+/- to zoom");
	set_vec2i(&p, 10, 70);
	draw_string(env, &p, 0x0054b0b0, "R to reset");
	set_vec2i(&p, 10, 90);
	draw_string(env, &p, 0x0054b0b0, "I to get info");
	set_vec2i(&p, 10, 110);
	draw_string(env, &p, 0x0054b0b0, "Mouse LB to move");
	set_vec2i(&p, 10, 130);
	draw_string(env, &p, 0x0054b0b0, "Mouse RB to move");
	set_vec2i(&p, 10, 150);
	draw_string(env, &p, 0x0054b0b0, "Mouse Wheel Up/Down to zoom");
	set_vec2i(&p, 10, 170);
	draw_string(env, &p, 0x0054b0b0, "Esc to quit");
}

void					update_env(t_env *env)
{
	t_image				*img;

	img = get_image(env->mlx, env->w, env->h);
	if (env->img)
	{
		put_plain_to_image(env->pln, env->img);
		mlx_put_image_to_window(env->mlx, env->win, env->img->ip, 0, 0);
		draw_menu(env);
		del_image(env->mlx, &env->img);
	}
	env->img = img;
}
