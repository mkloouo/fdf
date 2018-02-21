/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:27:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 17:29:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_H
# define HANDLERS_H

# include <env.h>

# define MOUSE_BUTTON_PRESS 4
# define MOUSE_BUTTON_PRESS_MASK (1L << 2)

# define MOUSE_BUTTON_RELEASE 5
# define MOUSE_BUTTON_RELEASE_MASK (1L << 3)

void					handle_mouse(t_env *env);
int						mouse_button_press_hook(int btn, int x, int y,
t_env *env);
int						mouse_button_release_hook(int btn, int x, int y,
t_env *env);

# define KEY_RELEASE 3
# define KEY_RELEASE_MASK (1L << 1)
# define KEY_PRESS 2
# define KEY_PRESS_MASK (1L << 0)

int						key_press_hook(int btn, t_env *env);
int						key_release_hook(int btn, t_env *env);
void					handle_key(int btn, t_env *env);

#endif
