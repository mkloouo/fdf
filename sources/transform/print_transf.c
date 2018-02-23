/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_transf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 02:28:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:20:07 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <transform.h>
#include <stdio.h>

void					print_transf(t_transf *tr)
{
	printf("Transform:\n");
	if (tr)
	{
		printf("Position:\n");
		print_vec3f(tr->pos);
		printf("Scale:\n");
		print_vec3f(tr->scl);
		printf("Rotation:\n");
		print_vec3f(tr->rot);
	}
}
