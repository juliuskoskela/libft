/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_chr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:28:01 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/19 19:23:48 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*s_chr(const char *s, int c)
{
	uint64_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_chr
**
**	The `s_chr` function locates the first occurrence of `c` (converted to a
**	char) in the string pointed to by `s`. The terminating null character is
**	considered to be part of the string; therefore if `c` is `\0`, the
**	function locates the terminating `\0`.
**
**  ----------------------------------------------------------------------------
*/
