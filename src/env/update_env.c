/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:47:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/05 16:13:36 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>

static void				draw_string(t_env *env, int move, unsigned int color,
									char *str)
{
	mlx_string_put(env->mlx, env->win, MENU_X_OFFSET, move, color, str);
}

static void				draw_menu(t_env *env)
{
	int					i;

	i = 15;
	draw_string(env, i, 0x004cb097, "<Keyboard Controls>");
	draw_string(env, (i += 20), 0x0054b0b0, "Arrows to move");
	draw_string(env, (i += 15), 0x0054b0b0, "WASDQE to rotate");
	draw_string(env, (i += 15), 0x0054b0b0, "ZX to scale Z");
	draw_string(env, (i += 15), 0x0054b0b0, "+/- to zoom");
	draw_string(env, (i += 15), 0x0054b0b0, "R to reset");
	draw_string(env, (i += 15), 0x0054b0b0, "I to get info");
	draw_string(env, (i += 15), 0x0054b0b0, "Esc to quit");
	draw_string(env, (i += 20), 0x004cb097, "<Mouse Controls>");
	draw_string(env, (i += 20), 0x0054b0b0, "Mouse LB to move");
	draw_string(env, (i += 15), 0x0054b0b0, "Mouse RB to rotate");
	draw_string(env, (i += 15), 0x0054b0b0, "Mouse Wheel Up/Down to zoom");
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
