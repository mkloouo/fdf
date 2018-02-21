/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:49:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 17:49:35 by modnosum         ###   ########.fr       */
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

# elif defined (__linux__)

#  define MOUSE_LEFT 1
#  define MOUSE_RIGHT 3
#  define MOUSE_MIDDLE 2
#  define MOUSE_SCROLL_UP 4
#  define MOUSE_SCROLL_DOWN 5

# endif

# define MOUSE_LEFT_BUTTON(B) (B == MOUSE_LEFT)

# define SCROLL_UP(B) (B == MOUSE_SCROLL_UP)
# define SCROLL_DOWN(B) (B == MOUSE_SCROLL_DOWN)

# define MOUSE_SCROLL_BUTTON(B) (SCROLL_UP(B) || SCROLL_DOWN(B))

# include <vector.h>

typedef struct			s_mouse
{
	t_vec2				*pv;
	t_vec2				*rv;
}						t_mouse;

t_mouse					*init_mouse(void);
void					del_mouse(t_mouse **mp);

#endif
