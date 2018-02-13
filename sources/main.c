/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 11:16:46 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 12:09:05 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

int						main(int ac, char **av)
{
	t_prog				*p;
	
    if (ac != 2)
	{
		print_usage(av[0]);
		return (1);
	}
	(void)p;
	/* if ((p = parse_arg(av[2]))) */
	/* 	start_drawing(p); */
	/* else */
	/* 	close_program(&p, av[1]); */
    return (0);
}

