/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:11:34 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:31:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <stdio.h>

void					print_env(t_env *env)
{
	printf("Env:\n");
	if (env)
	{
		print_plain(env->pln);
		print_image(env->img);
		print_mouse(env->ms);
		print_keyboard(env->kb);
		printf("Title: %s\n", env->title);
		printf("Width: %d\n", env->w);
		printf("Height: %d\n", env->h);
	}
	printf("\n");
}
