/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 11:16:46 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 15:39:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

int						main(int ac, char **av)
{
	if (ac == 2)
	{
		init_hooks(init_prog(read_plain_from_file(av[1])));
		return (0);
	}
	print_usage(av[0]);
    return (1);
}

