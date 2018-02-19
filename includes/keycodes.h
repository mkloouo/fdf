/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keycodes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:17:06 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:17:31 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYCODES_H
# define KEYCODES_H

# if defined(__APPLE__)

#  define ESC_KEYCODE 53
#  define Q_KEYCODE 12

# elif defined(__linux__)

#  define ESC_KEYCODE 65307
#  define Q_KEYCODE 113

# endif

#endif
