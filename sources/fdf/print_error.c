/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 20:00:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:59:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>
#include <string.h>

void					print_error(void)
{
	ft_putstr_fd("fdf: ", 2);
	ft_putendl_fd((errno == 0)
				  ? ("Unknow error")
				  : (strerror(errno)), 2);
}
