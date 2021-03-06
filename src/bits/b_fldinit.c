/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_fldinit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:23:17 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/03 01:26:49 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

uint64_t		*b_fldinit(uint64_t size)
{
	uint64_t	i;
	uint64_t	*field;

	i = 0;
	field = (uint64_t *)malloc(sizeof(uint64_t) * size);
	while (i < size)
	{
		field[i] = 0;
		i++;
	}
	return (field);
}

/*
**  ----------------------------------------------------------------------------
**
**	B_fldinit
**
**	Initialize a field with 0.
**
**  ----------------------------------------------------------------------------
*/
