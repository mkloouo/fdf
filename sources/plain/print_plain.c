/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:33:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <stdio.h>

void					print_plain(t_plain *pln)
{
	printf("plain\n");
	printf("file: %s\n", pln->file);
	printf("width: %d\nheight: %d\n", pln->w, pln->h);
	print_transf(pln->tr);
}
