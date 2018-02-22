/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:19:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 03:57:42 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYBOARD_H
# define KEYBOARD_H

# if defined(__APPLE__)

#  define ESC_KC 53

#  define Q_KC -1
#  define W_KC -1
#  define E_KC -1
#  define R_KC -1
#  define T_KC -1
#  define Y_KC -1
#  define U_KC -1
#  define I_KC -1
#  define O_KC -1
#  define P_KC -1
#  define A_KC -1
#  define S_KC -1
#  define D_KC -1
#  define F_KC -1
#  define G_KC -1
#  define H_KC -1
#  define J_KC -1
#  define K_KC -1
#  define L_KC -1
#  define Z_KC -1
#  define X_KC -1
#  define C_KC -1
#  define V_KC -1
#  define B_KC -1
#  define N_KC -1
#  define M_KC -1

#  define SPACE_KC -1
#  define SPACE_KC -1
#  define SHIFT_KC -1
#  define CTRL_KC -1
#  define ALT_KC -1

#  define UP_ARR_KC -1
#  define LEFT_ARR_KC -1
#  define DOWN_ARR_KC -1
#  define RIGHT_ARR_KC -1

#  define NUM_PLUS_KC -1
#  define NUM_MINUS_KC -1

#  define NUM_1_KC -1
#  define NUM_2_KC -1
#  define NUM_4_KC -1
#  define NUM_5_KC -1
#  define NUM_7_KC -1
#  define NUM_8_KC -1

# elif defined(__linux__)

#  define ESC_KC 65307

#  define Q_KC 113
#  define W_KC 119
#  define E_KC 101
#  define R_KC 114
#  define T_KC 116
#  define Y_KC 121
#  define U_KC -1
#  define I_KC -1
#  define O_KC -1
#  define P_KC -1
#  define A_KC 97
#  define S_KC 115
#  define D_KC 100
#  define F_KC 102
#  define G_KC 103
#  define H_KC 104
#  define J_KC -1
#  define K_KC -1
#  define L_KC -1
#  define Z_KC -1
#  define X_KC -1
#  define C_KC -1
#  define V_KC -1
#  define B_KC -1
#  define N_KC -1
#  define M_KC -1

#  define SPACE_KC -1
#  define SHIFT_KC -1
#  define CTRL_KC -1
#  define ALT_KC -1

#  define UP_ARR_KC 65362
#  define LEFT_ARR_KC 65361
#  define DOWN_ARR_KC 65364
#  define RIGHT_ARR_KC 65363

#  define NUM_PLUS_KC 65451
#  define NUM_MINUS_KC 65453

#  define NUM_1_KC 65436
#  define NUM_2_KC 65433
#  define NUM_4_KC 65430
#  define NUM_5_KC 65437
#  define NUM_7_KC 65429
#  define NUM_8_KC 65431

# endif

# define QUIT_BUTTON(B) (B == ESC_KC)

# define MOVE_UP(B) (B == UP_ARR_KC || B == W_KC)
# define MOVE_LEFT(B) (B == LEFT_ARR_KC || B == A_KC)
# define MOVE_DOWN(B) (B == DOWN_ARR_KC || B == S_KC)
# define MOVE_RIGHT(B) (B == RIGHT_ARR_KC || B == D_KC)

# define MOVE_HOR(B) (MOVE_LEFT(B) || MOVE_RIGHT(B))
# define MOVE_VER(B) (MOVE_UP(B) || MOVE_DOWN(B))

# define MOVE_BUTTON(B) (MOVE_HOR(B) || MOVE_VER(B))

# define ZOOM_IN(B) (B == NUM_PLUS_KC)
# define ZOOM_OUT(B) (B == NUM_MINUS_KC)

# define ZOOM_BUTTON(B) (ZOOM_IN(B) || ZOOM_OUT(B))

typedef struct			s_keyboard
{
	int					ctrl_pressed;
	int					shift_pressed;
	int					alt_pressed;
}						t_keyboard;

t_keyboard				*init_keyboard(void);
void					del_keyboard(t_keyboard **kp);
void					print_keyboard(t_keyboard *kb);

#endif
