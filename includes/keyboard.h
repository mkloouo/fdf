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
#  define Q_KEYCODE 113

# endif

#endif
