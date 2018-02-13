/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 11:16:46 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 12:38:48 by modnosum         ###   ########.fr       */
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
	if ((p = parse_arg(av[2])))
		init_prog_hooks(p);
    return (0);
}

