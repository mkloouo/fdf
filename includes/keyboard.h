/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:19:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:19:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYBOARD_H
# define KEYBOARD_H

# if defined(__APPLE__)

#  define ESC_KEYCODE 53
#  define Q_KEYCODE 12

# elif defined(__linux__)

#  define ESC_KEYCODE 65307

#  define W_KEYCODE 119
#  define A_KEYCODE 97
#  define S_KEYCODE 115
#  define D_KEYCODE 100

#  define R_KEYCODE 114
#  define F_KEYCODE 102

#  define Q_KEYCODE 113
#  define E_KEYCODE 101

#  define UP_ARROW_KEYCODE 65362
#  define LEFT_ARROW_KEYCODE 65361
#  define DOWN_ARROW_KEYCODE 65364
#  define RIGHT_ARROW_KEYCODE 65363

#  define NUMLOCK_PLUS_KEYCODE 65451
#  define NUMLOCK_MINUX_KEYCODE 65453

# define NUMLOCK_7_KEYCODE 65429
# define NUMLOCK_8_KEYCODE 65431
# define NUMLOCK_4_KEYCODE 65430
# define NUMLOCK_5_KEYCODE 65437
# define NUMLOCK_1_KEYCODE 65436
# define NUMLOCK_2_KEYCODE 65433

# endif

# include <ds.h>

# define KEY_RELEASE 3
# define KEY_RELEASE_MASK (1L << 1)
# define KEY_PRESS 2
# define KEY_PRESS_MASK (1L << 0)

# define ZOOM_IN(B) (B == NUMLOCK_PLUS_KEYCODE || B == R_KEYCODE)
# define ZOOM_OUT(B) (B == NUMLOCK_MINUX_KEYCODE || B == F_KEYCODE)
# define ZOOM_BUTTON(B) (ZOOM_IN(B) || ZOOM_OUT(B))

# define MOVE_UP(B) (B == W_KEYCODE || B == UP_ARROW_KEYCODE)
# define MOVE_LEFT(B) (B == A_KEYCODE || B == LEFT_ARROW_KEYCODE)
# define MOVE_DOWN(B) (B == S_KEYCODE || B == DOWN_ARROW_KEYCODE)
# define MOVE_RIGHT(B) (B == D_KEYCODE || B == RIGHT_ARROW_KEYCODE)
# define MOVE_HORIZONTAL(B) (MOVE_LEFT(B) || MOVE_RIGHT(B))
# define MOVE_VERTICAL(B) (MOVE_UP(B) || MOVE_DOWN(B))
# define MOVE_BUTTON(B) (MOVE_HORIZONTAL(B) || MOVE_VERTICAL(B))

# define ROTATE_X_M(B) (B == NUMLOCK_7_KEYCODE)
# define ROTATE_X_P(B) (B == NUMLOCK_8_KEYCODE)
# define ROTATE_Y_M(B) (B == NUMLOCK_4_KEYCODE)
# define ROTATE_Y_P(B) (B == NUMLOCK_5_KEYCODE)
# define ROTATE_Z_M(B) (B == NUMLOCK_1_KEYCODE)
# define ROTATE_Z_P(B) (B == NUMLOCK_2_KEYCODE)

# define ROTATE_X(B) (ROTATE_X_M(B) || ROTATE_X_P(B))
# define ROTATE_Y(B) (ROTATE_Y_M(B) || ROTATE_Y_P(B))
# define ROTATE_Z(B) (ROTATE_Z_M(B) || ROTATE_Z_P(B))
	
# define ROTATE_BUTTON(B) (ROTATE_X(B) || ROTATE_Y(B) || ROTATE_Z(B))
	
# define QUIT_BUTTON(B) (B == ESC_KEYCODE)

int						key_press_hook(int button, t_ds *ds);
int						key_release_hook(int button, t_ds *ds);

#endif
