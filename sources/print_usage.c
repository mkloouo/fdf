/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 18:34:10 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/22 19:52:57 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft.h"

void					print_usage(char *prog_name, char *usage)
{
	ft_putstr("usage: ");
	ft_putstr(prog_name);
	ft_putendl(usage);
}
