/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:17:40 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:17:40 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOKS_H
# define HOOKS_H

int						keyboard_hook(int keycode, void *fdf);
int						mouse_hook(int button, int x, int y, void *fdf);

#endif
