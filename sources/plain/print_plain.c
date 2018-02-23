/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:15:32 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <stdio.h>

void					print_plain(t_plain *pln)
{
	printf("Plain\n");
	if (pln)
	{
		printf("File: %s\n", pln->file);
		printf("Width: %d\nHeight: %d\n", pln->w, pln->h);
		print_transf(pln->tr);
	}
}
