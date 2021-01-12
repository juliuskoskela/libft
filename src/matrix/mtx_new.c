/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 23:56:49 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/06 05:52:31 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_mtx			*mtx_new(char *name, size_t x, size_t y)
{
	size_t		i;
	t_mtx		*out;

	i = 0;
	out = (t_mtx *)v_alloc(sizeof(t_mtx));
	out->name = s_dup(name);
	out->this = (double *)v_alloc(sizeof(double) * (x * y));
	out->x = x;
	out->y = y;
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	Mtx_new
**
**	Create a new matrix.
**
**  ----------------------------------------------------------------------------
*/
