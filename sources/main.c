/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:10:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 18:54:44 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <fdf.h>
#include <stdio.h>
#include <errno.h>

int						main(int ac, char **av)
{
	t_plain				*plain;
	t_fdf				*fdf;

	if (ac == 2)
	{
		plain = get_plain_from_file(av[1]);
		if (plain == NULL)
		{
			perror("fdf");
			return (2);
		}
		fdf = get_fdf(plain);
		if (fdf == NULL)
		{
			perror("fdf");
			return (3);
		}
		start_fdf(fdf);
		return (0);
	}
	ft_putendl("usage: fdf map_file");
	return (1);
}
