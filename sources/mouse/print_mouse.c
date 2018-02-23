/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_mouse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:18:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:20:27 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mouse.h>
#include <stdio.h>

void					print_mouse(t_mouse *ms)
{
	printf("Mouse:\n");
	if (ms)
	{
		printf("Pressed:\n");
		print_vec2i(ms->pv);
		printf("Released:\n");
		print_vec2i(ms->rv);
		printf("Current:\n");
		print_vec2i(ms->cv);
	}
}
