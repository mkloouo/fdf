/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 11:59:10 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 12:09:18 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

void					print_usage(char *program_name)
{
	ft_putstr("usage:\n");
	ft_putstr(program_name);
	ft_putendl(" FILE");
}
