/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_mult_vct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:28:34 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/11 07:42:36 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_vct4			g_mult_vct(t_mtx4 mtx, t_vct4 vct)
{
	t_vct4		out;

	out.x = g_dot(mtx.v1, vct);
	out.y = g_dot(mtx.v2, vct);
	out.z = g_dot(mtx.v3, vct);
	out.w = g_dot(mtx.v4, vct);
	return (out);
}
