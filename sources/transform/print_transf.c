/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_transf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 02:28:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 02:29:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <transform.h>
#include <stdio.h>

void					print_transf(t_transf *tr)
{
	printf("transform:\n");
	print_vec3f(tr->pos);
	print_vec3f(tr->scl);
	print_vec3f(tr->rot);
}
