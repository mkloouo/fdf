/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:20:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/20 22:27:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct			s_vec3
{
	float				x;
	float				y;
	float				z;
	int					c;
}						t_vec3;

typedef struct			s_vec2
{
	float				x;
	float				y;
	int					c;
}						t_vec2;

t_vec3					*get_vec3(float x, float y, float z, int c);

void					set_vec3(t_vec3 *v, float x, float y, float z);
void					set_vec3_c(t_vec3 *v, int c);

void					del_vec3(t_vec3 **vp);

t_vec2					*get_vec2(float x, float y, int c);

void					set_vec2(t_vec2 *v, float x, float y);
void					set_vec2_c(t_vec2 *v, int c);

void					del_vec2(t_vec2 **vp);

#endif
