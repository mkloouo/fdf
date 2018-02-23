/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_keyboard.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:20:54 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:22:27 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <keyboard.h>
#include <stdio.h>

void					print_keyboard(t_keyboard *kb)
{
	printf("Keyboard:\n");
	if (kb)
	{
		printf("Ctrl pressed: %s\n", (kb->ctrl_pressed) ? ("yes") : ("no"));
		printf("Shift pressed: %s\n", (kb->shift_pressed) ? ("yes") : ("no"));
		printf("Alt pressed: %s\n", (kb->alt_pressed) ? ("yes") : ("no"));
		printf("Current key: %d\n", kb->ck);
	}
}
