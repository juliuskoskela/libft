/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_get_row.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:07:02 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 00:08:24 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void			mtx_get_row(double *row, t_mtx *mtx, size_t index)
{
	size_t		i;
	size_t		j;

	i = index * mtx->x;
	j = 0;
	while (i < (index + 1) * mtx->x)
	{
		row[j] = mtx->this[i];
		j++;
		i++;
	}
}

/*
**  ----------------------------------------------------------------------------
**
**	Mtx_get_row
**
**	Get a row of matrix `mtx` at `index`.
**
**  ----------------------------------------------------------------------------
*/
