/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:28:06 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/26 21:39:00 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <libft.h>
#include <stdlib.h>
#include <mlx.h>

void					del_env(t_env **ep)
{
	if (ep && *ep)
	{
		del_mouse(&(*ep)->ms);
		del_keyboard(&(*ep)->kb);
		del_plain(&(*ep)->pln, (*ep)->pln->h, (*ep)->pln->w);
		del_image((*ep)->mlx, &(*ep)->img);
		if ((*ep)->mlx && (*ep)->win)
			mlx_destroy_window((*ep)->mlx, (*ep)->win);
		ft_memdel((void**)ep);
	}
	exit(0);
}
