/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_appendc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 06:05:50 by jkoskela          #+#    #+#             */
/*   Updated: 2020/11/02 06:21:41 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char			*s_appendc(char *str, char c)
{
	char	*out;

	out = NULL;
	if (!str)
		out = s_ndup(&c, 1);
	else
		s_join(str, s_ndup(&c, 1));
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_appendc
**
**	Append char `c` to the end of `str`. If `str` is empty create it.
**
**  ----------------------------------------------------------------------------
*/
