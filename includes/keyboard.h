/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:19:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 17:28:40 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYBOARD_H
# define KEYBOARD_H

# if defined(__APPLE__)

#  define ESC_KC 53
#  define Q_KC 12

# elif defined(__linux__)

#  define ESC_KC 65307

#  define Q_KC 113
#  define W_KC 119
#  define E_KC 101
#  define R_KC 114
#  define T_KC 116
#  define Y_KC 121
#  define A_KC 97
#  define S_KC 115
#  define D_KC 100
#  define F_KC 102
#  define G_KC 103
#  define H_KC 104

#  define UP_ARR_KC 65362
#  define LEFT_ARR_KC 65361
#  define DOWN_ARR_KC 65364
#  define RIGHT_ARR_KC 65363

#  define NUM_P_KC 65451
#  define NUM_M_KC 65453

#  define NUM_7_KC 65429
#  define NUM_8_KC 65431
#  define NUM_4_KC 65430
#  define NUM_5_KC 65437
#  define NUM_1_KC 65436
#  define NUM_2_KC 65433

# endif

# define QUIT_BUTTON(B) (B == ESC_KC)

# define POSITION_UP(B) (B == UP_ARR_KC)
# define POSITION_LEFT(B) (B == LEFT_ARR_KC)
# define POSITION_DOWN(B) (B == DOWN_ARR_KC)
# define POSITION_RIGHT(B) (B == RIGHT_ARR_KC)

# define POSITION_HORIZONTAL(B) (POSITION_LEFT(B) || POSITION_RIGHT(B))
# define POSITION_VERTICAL(B) (POSITION_UP(B) || POSITION_DOWN(B))

# define POSITION_BUTTON(B) (POSITION_HORIZONTAL(B) || POSITION_VERTICAL(B))

# define ROTATE_X_P(B) (B == A_KC)
# define ROTATE_X_M(B) (B == S_KC)
# define ROTATE_Y_P(B) (B == D_KC)
# define ROTATE_Y_M(B) (B == F_KC)
# define ROTATE_Z_P(B) (B == G_KC)
# define ROTATE_Z_M(B) (B == H_KC)

# define ROTATE_X(B) (ROTATE_X_P(B) || ROTATE_X_M(B))
# define ROTATE_Y(B) (ROTATE_Y_P(B) || ROTATE_Y_M(B))
# define ROTATE_Z(B) (ROTATE_Z_P(B) || ROTATE_Z_M(B))

# define ROTATE_BUTTON(B) (ROTATE_X(B) || ROTATE_Y(B) || ROTATE_Z(B))

# define SCALE_X_P(B) (B == Q_KC)
# define SCALE_X_M(B) (B == W_KC)
# define SCALE_Y_P(B) (B == E_KC)
# define SCALE_Y_M(B) (B == R_KC)
# define SCALE_Z_P(B) (B == T_KC)
# define SCALE_Z_M(B) (B == Y_KC)

# define SCALE_X(B) (SCALE_X_P(B) || SCALE_X_M(B))
# define SCALE_Y(B) (SCALE_Y_P(B) || SCALE_Y_M(B))
# define SCALE_Z(B) (SCALE_Z_P(B) || SCALE_Z_M(B))

# define ZOOM_IN(B) (B == NUM_P_KC)
# define ZOOM_OUT(B) (B == NUM_M_KC)
# define ZOOM(B) (ZOOM_IN(B) || ZOOM_OUT(B))

# define SCALE_BUTTON(B) (SCALE_X(B) || SCALE_Y(B) || SCALE_Z(B) || ZOOM(B))

#endif
