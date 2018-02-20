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

#include <ds.h>
#include <stdio.h>
#include <errno.h>

int						main(int ac, char **av)
{
	t_plain				*plain;
	t_ds				*ds;
	
	if (ac == 2)
	{
		plain = get_plain_from_file(av[1]);
		if (plain == NULL)
		{
			perror("fdf");
			return (2);
		}
		ds = get_ds(plain, av[0]);
		if (ds == NULL)
		{
			delete_plain(&plain, 0);
			perror("fdf");
			return (3);
		}
		start_loop(ds);
		delete_ds(&ds);
		return (0);
	}
	ft_putendl("usage: fdf map_file");
	return (1);
}
