/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:49:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/20 23:32:04 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOUSE_H
# define MOUSE_H

# if defined(__APPLE__)

#  define MOUSE_LEFT 1
#  define MOUSE_RIGHT 2
#  define MOUSE_MIDDLE 3
#  define MOUSE_SCROLL_UP 4
#  define MOUSE_SCROLL_DOWN 5
#  define MOUSE_SCROLL_LEFT 6
#  define MOUSE_SCROLL_RIGHT 7

# endif

# define MOUSE_BUTTON_PRESS 4
# define MOUSE_BUTTON_PRESS_MASK (1L << 2)

# define MOUSE_BUTTON_RELEASE 5
# define MOUSE_BUTTON_RELEASE_MASK (1L << 3)

# include <env.h>

int						mouse_button_press_hook(int btn, int x, int y,
t_env *env);
int						mouse_button_release_hook(int btn, int x, int y,
t_env *env);

#endif
