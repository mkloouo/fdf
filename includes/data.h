/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 18:56:43 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 19:18:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# include <point.h>

typedef struct			s_data
{
	t_point3			*p;
	int					color;
}						t_data;

t_data					*get_data(t_point3 *p, int color);

void					set_data(t_data *d, t_point3 *p, int color);

#endif
