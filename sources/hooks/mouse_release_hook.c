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
	print_num("Mouse Button: ", button);
	ft_putchar('\n');
	print_num("X: ", x);
	ft_putchar(' ');
	print_num("Y: ", y);
	ft_putchar('\n');
	(void)fdf;
	
//	redraw((t_fdf*)fdf);
	return (0);
}
