/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:27:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/23 11:14:45 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_H
# define HANDLERS_H

# include <env.h>

# define KEY_RELEASE 3
# define KEY_RELEASE_MASK (1L << 1)
# define KEY_PRESS 2
# define KEY_PRESS_MASK (1L << 0)

# define MOUSE_BUTTON_PRESS 4
# define MOUSE_BUTTON_PRESS_MASK (1L << 2)
# define MOUSE_BUTTON_RELEASE 5
# define MOUSE_BUTTON_RELEASE_MASK (1L << 3)
# define MOTION_NOTIFY 6
# define MOTION_NOTIFY_MASK (1L << 6)

int						key_press(int btn, t_env *env);
int						key_release(int btn, t_env *env);
void					key_handler(t_env *env, int event_type);

int						ms_btn_press(int btn, int x, int y, t_env *env);
int						ms_btn_release(int btn, int x, int y, t_env *env);
int						ms_move(int x, int y, t_env *env);
void					mouse_handler(t_env *env, int event_type);
#endif
