/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 20:00:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/22 20:02:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <string.h>

void					print_error(char *prog_name)
{
	ft_putstr(prog_name);
	ft_putstr(": ");
	ft_putendl(strerror(errno));
}
