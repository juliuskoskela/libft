/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_iteri.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:28:52 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/19 19:57:58 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void		s_iteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*
**  ----------------------------------------------------------------------------
**
**	S_iter
**
**	Perform function `f` (that takes an argument of type `char *` as well
**	as the index `i`) passed as a function pointer on all elements of
**	string `s`.
**
**  ----------------------------------------------------------------------------
*/
