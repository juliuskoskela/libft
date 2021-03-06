/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_vct4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 19:05:45 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/20 19:05:46 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_vct4			g_vct4(double x, double y, double z, double w)
{
	t_vct4		out;

	out.x = x;
	out.y = y;
	out.z = z;
	out.w = w;
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	G_vtx
**
**	Create an indexed vertex.
**
**  ----------------------------------------------------------------------------
*/
