/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:04:23 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 18:43:19 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

typedef struct			s_point2
{
	double				x;
	double				y;
}						t_point2;

typedef struct			s_point3
{
	double				x;
	double				y;
	double				z;
}						t_point3;

t_point2				*get_point2(double x, double y);
t_point3				*get_point3(double x, double y, double z);

void					set_point2(t_point2 *p, double x, double y);
void					set_point3(t_point3 *p, double x, double y, double z);

#endif
