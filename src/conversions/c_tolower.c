/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_tolower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:25:22 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 09:49:19 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int			c_tolower(int c)
{
	if (is_upper(c))
		c += 32;
	return (c);
}

/*
**  ----------------------------------------------------------------------------
**
**	C_tolower
**
**	Convert a character (passed as an int) into uppercase.
**
**  ----------------------------------------------------------------------------
*/
