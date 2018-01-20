/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 18:33:13 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/20 18:33:53 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void					check_args(int required, int given, char **av)
{
	if (required != given)
	{
		print_usage(av[0]);
		exit(1);
	}
}
