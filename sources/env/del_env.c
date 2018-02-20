/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:28:06 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/20 23:30:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <stdlib.h>
#include <mlx.h>

void					del_env(t_env **ep)
{
	del_plain(&(*ep)->pln, 0);
	del_image((*ep)->mlx, &(*ep)->img);
	mlx_destroy_window((*ep)->mlx, (*ep)->win);
	ft_memdel((void**)ep);
	exit(0);
}
