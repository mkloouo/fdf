/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_release_hook.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:18:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:36:38 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <keyboard.h>
#include <stdio.h>
int						key_release_hook(int btn, t_env *env)
{
//	printf("button released: %d\n", btn);
	(void)env;
	(void)btn;
	return (0);
}
