/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:49:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:25:01 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOUSE_H
# define MOUSE_H

# if defined(__APPLE__)

#  define MS_LB_KC 1
#  define MS_RB_KC 2
#  define MS_MB_KC 3
#  define MS_SCROLL_UP_KC 4
#  define MS_SCROLL_DOWN_KC 5
#  define MS_SCROLL_LEFT_KC 6
#  define MS_SCROLL_RIGHT_KC 7

# elif defined (__linux__)

#  define MS_LB_KC 1
#  define MS_RB_KC 3
#  define MS_MB_KC 2
#  define MS_SCROLL_UP_KC 4
#  define MS_SCROLL_RIGHT_KC -1
#  define MS_SCROLL_LEFT_KC -1
#  define MS_SCROLL_DOWN_KC 5

# endif

# define LEFT_BUTTON(B) (B == MS_LB_KC)
# define RIGHT_BUTTON(B) (B == MS_RB_KC)
# define MIDDLE_BUTTON(B) (B = MS_MB_KC)
# define SCROLL_UP_BUTTON(B) (B == MS_SCROLL_UP_KC)
# define SCROLL_DOWN_BUTTON(B) (B == MS_SCROLL_DOWN_KC)

# define MOUSE_SCROLL(B) (SCROLL_UP_BUTTON(B) || (SCROLL_DOWN_BUTTON(B)))

# include <vector.h>

/*
 * Press vector
 * Release vector
 * Current position vector
 * Current p/r button
 * Is button being pressed
 */

typedef struct			s_mouse
{
	t_vec2i				*pv;
	t_vec2i				*rv;
	t_vec2i				*cv;
	int					btn;
	int					pressed;
}						t_mouse;

t_mouse					*init_mouse(void);
void					del_mouse(t_mouse **mp);
void					print_mouse(t_mouse *ms);

#endif
