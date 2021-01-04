/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_rotx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:54:11 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/04 05:12:22 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void			g_rotx(t_mtx *mtx, double angle)
{
	mtx->this[0] = 1.0;
	mtx->this[5] = cos(m_rad(angle));
	mtx->this[6] = -sin(m_rad(angle));
	mtx->this[9] = sin(m_rad(angle));
	mtx->this[10] = cos(m_rad(angle));
	mtx->this[15] = 1.0;
}

/*
**  ----------------------------------------------------------------------------
**
**	G_rotx
**
**	Create a rotation matrix of `angle` degrees in the x direction.
**
**  ----------------------------------------------------------------------------
*/
