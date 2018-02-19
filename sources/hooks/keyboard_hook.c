/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard_hook.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:23 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:11:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hooks.h>
#include <keycodes.h>
#include <libft.h>
#include <stdlib.h>

int						keyboard_hook(int keycode, void *fdf)
{
	ft_putstr("Keyboard Keycode: ");
	ft_putnbr(keycode);
	ft_putchar('\n');
	if (keycode == ESC_KEYCODE || keycode == Q_KEYCODE)
		exit(1);
	(void)fdf;
	return (0);
}
