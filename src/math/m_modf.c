/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_modf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 00:50:32 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/21 12:52:47 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

double			m_modf(double x, double *iptr)
{
	t_double	u;
	uint64_t	mask;
	int			e;

	u = (t_double)x;
	e = (int)(u.i >> 52 & 0x7ff) - 0x3ff;
	if (e >= 52)
	{
		*iptr = x;
		if (e == 0x400 && u.i << 12 != 0)
			return (x);
		u.i &= 1ULL << 63;
		return (u.f);
	}
	if (e < 0)
	{
		u.i &= 1ULL << 63;
		*iptr = u.f;
		return (x);
	}
	mask = -1ULL >> 12 >> e;
	if ((u.i & mask) == 0)
	{
		*iptr = x;
		u.i &= 1ULL << 63;
		return (u.f);
	}
	u.i &= ~mask;
	*iptr = u.f;
	return (x - u.f);
}

/*
**  ----------------------------------------------------------------------------
**
**	M_modf
**
**	Convert double `x` into a decimal representation. Function returns mantissa
**	and integral part is stored in the previously allocated int pointer `iptr`.
**
**  ----------------------------------------------------------------------------
*/
