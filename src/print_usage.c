/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 18:34:10 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/20 18:34:28 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void					print_usage(char *prog_name)
{
	ft_putstr("usage: ");
	ft_putstr(prog_name);
	ft_putendl(" <filename>");
}
