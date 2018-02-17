/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_prog_hooks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 12:38:52 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 15:40:30 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <stdio.h>

static void				print_point(t_list *e)
{
	t_point				*pc;

	pc = (t_point*)e->content;
	printf("(%.1f, %.1f, %.1f) color: %#X\n", pc->x, pc->y, pc->z, pc->color);
}

void					init_hooks(t_prog *p)
{
	if (p)
		ft_lstiter(p->plain->points, print_point);
	(void)p;
}
