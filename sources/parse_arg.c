/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 12:16:16 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 15:34:10 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

t_prog					*parse_arg(char *file)
{
	t_prog				*p;

	if ((p = init_prog()))
		if (!(p->plain = read_plain_from_file(file)))
			destroy_prog(&p);
	return (p);
}
