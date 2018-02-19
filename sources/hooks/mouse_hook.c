/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:25 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:14:42 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hooks.h>
#include <libft.h>
#include <image.h>
#include <fdf.h>
#include <mlx.h>

static void				print_num(char *s, int n)
{
	ft_putstr(s);
	ft_putnbr(n);
}

int						mouse_hook(int button, int x, int y, void *fdf)
{
	unsigned int		color;

	print_num("Mouse Button: ", button);
	ft_putchar('\n');
	print_num("X: ", x);
	print_num("Y: ", y);
	ft_putchar('\n');
	color = mlx_get_color_value(((t_fdf*)fdf)->mlx, 0x00FFFFFF);
	put_pixel(((t_fdf*)(fdf))->image, x, y, color);
	redraw((t_fdf*)fdf);
	return (0);
}
