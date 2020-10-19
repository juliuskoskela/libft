/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_len.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:29:17 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/19 20:48:52 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

uint64_t		s_len(const char *s)
{
	uint64_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_len
**
**	String lenght; returns the lenght of the null terminated string `s`.
**
**  ----------------------------------------------------------------------------
*/
