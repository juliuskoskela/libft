/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:15:56 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 00:16:25 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void			mtx_clear(t_mtx *mtx)
{
	size_t		i;

	i = 0;
	while (i < mtx->x * mtx->y)
	{
		mtx->this[i] = 0.0;
		i++;
	}
}

/*
**  ----------------------------------------------------------------------------
**
**	Mtx_clear
**
**	Clear matrix.
**
**  ----------------------------------------------------------------------------
*/
