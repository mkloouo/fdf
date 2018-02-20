/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:49:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 19:52:24 by modnosum         ###   ########.fr       */
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

# include <ds.h>

int						mouse_button_press_hook(int button, int x, int y,
												t_ds *ds);
int						mouse_button_release_hook(int button, int x, int y,
													t_ds *ds);

#endif
