/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_release_hook.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:44:52 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:58:16 by modnosum         ###   ########.fr       */
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

int						mouse_release_hook(int button, int x, int y, void *fdf)
{
	static t_point		p1;
	t_point				p2;
//	unsigned int		color;

	if (p1.x != x && p1.y != y)
	{
		p2.x = x;
		p2.y = y;
		p2.color = p1.color;
		draw_line(((t_fdf*)fdf)->image, &p1, &p2);
		p1.x = x;
		p1.y = y;
		p1.z = 0;
		p1.color = mlx_get_color_value(((t_fdf*)fdf)->mlx, 0x00FFFFFF);
	}
	print_num("Mouse Button: ", button);
	ft_putchar('\n');
	print_num("X: ", x);
	ft_putchar(' ');
	print_num("Y: ", y);
	ft_putchar('\n');
	redraw((t_fdf*)fdf);
	return (0);
}
