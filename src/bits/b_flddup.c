/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_flddup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:23:01 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/03 01:24:53 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_field			*b_flddup(t_field *src)
{
	t_field		*dest;
	uint64_t	i;

	i = 0;
	dest = b_fldnew(src->w, src->h);
	while (i < src->h)
	{
		dest->row[i] = src->row[i];
		i++;
	}
	return (dest);
}

/*
**  ----------------------------------------------------------------------------
**
**	B_fldup
**
**	Duplicated field. Allocates the necessary memory.
**
**  ----------------------------------------------------------------------------
*/
