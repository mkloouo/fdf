/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_button_release_hook.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 00:03:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:03:13 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mouse.h>
#include <stdio.h>

int						mouse_button_release_hook(int button, int x, int y,
												t_env *env)
{
	printf("mouse button released: %d at %dX%d\n", button, x, y);
	(void)env;
	return (0);
}
