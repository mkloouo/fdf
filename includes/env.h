/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:12:20 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 17:15:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

# define DEFAULT_WIDTH 800
# define DEFAULT_HEIGHT 600

# define MIN_WIDTH 800
# define MIN_HEIGHT 600

# define MAX_WIDTH 1920
# define MAX_HEIGHT 1080

# include <image.h>
# include <plain.h>
# include <mouse.h>

typedef struct			s_env
{
	void				*mlx;
	void				*win;
	t_plain				*pln;
	t_image				*img;
	t_mouse				*ms;
}						t_env;

t_env					*init_env(t_plain *pln);
void					del_env(t_env **ep);

void					init_hooks(t_env *env);
void					start_env(t_env *env);

void					update_env(t_env *env);

#endif
