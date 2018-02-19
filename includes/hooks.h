/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:17:40 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:08:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOKS_H
# define HOOKS_H

# define MOTION_NOTIFY 6
# define MOUSE_MOTION_MASK 1L<<6

int						keyboard_hook(int keycode, void *fdf);
int						mouse_release_hook(int button, int x, int y, void *fdf);
int						mouse_motion_hook(int x, int y, void *fdf);
int						expose_hook(void *fdf);

#endif