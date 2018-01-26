/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 19:56:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 20:00:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

int							fdf(char *file)
{
	t_fdf					*f;

	f = init_fdf(file, get_plain(file));
	if (!f)
		print_error();
	else
		print_plain(f->plain);
	return (0);
}
