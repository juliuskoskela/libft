/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_neg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:26:47 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 10:08:33 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int			is_neg(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

/*
**  ----------------------------------------------------------------------------
**
**	Is_alnum
**
**	Returns 1 if `c` is a negative number.
**
**  ----------------------------------------------------------------------------
*/
