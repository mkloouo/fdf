/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_vec_el.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:53:06 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:13:38 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>
#include <stdio.h>

void					print_vec_el(t_list *vec_el)
{
	t_vec3				*p;

	if (vec_el && (p = (t_vec3*)vec_el->content))
		printf("(%.1f %.1f %.1f) %#x\n", p->x, p->y, p->z, p->c);
	else
		printf("no vec\n");
}
