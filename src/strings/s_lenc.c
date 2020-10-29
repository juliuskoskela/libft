/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_lenc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 03:01:24 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/29 03:06:37 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int				s_lenc(char *s, char c)
{
	uint64_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_lenc
**
**	String lenght (c); returns the lenght until the first occurence of `c` in
**	the null terminated string `s` or 0 if c doesn't occur.
**
**  ----------------------------------------------------------------------------
*/
