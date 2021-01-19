/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_ftoe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 08:16:06 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/18 15:58:35 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static char		*check_naninf(double nbr)
{
	if (nbr != nbr)
		return (s_dup("nan"));
	if (nbr > 0x1.fffffffffffffp+1023)
		return (s_dup("inf"));
	if (nbr == log(0))
		return (s_dup("-inf"));
	return (NULL);
}

char			*c_ftoe(double nbr, size_t p)
{
	char		*out;
	char		*tmp;
	char		*nan;
	double		sign;
	int			i;

	i = 0;
	sign = 1;
	if ((nan = check_naninf(nbr)))
		return(nan);
	if (nbr < 0)
		sign = -1;
	nbr = fabs(nbr);
	while (nbr >= 10.0)
	{
		nbr /= 10.0;
		i++;
	}
	nbr = nbr * sign;
	tmp = c_ftoa(nbr, p);
	out = s_join_free(tmp, "e+0", 1);
	tmp = s_join_free(out, c_itoa_base(i, 10), 2);
	free(out);
	return (tmp);
}

/*
**  ----------------------------------------------------------------------------
**
**	C_ftoe
**
**	Convert double `nbr` into scientific notation in ascii.
**
**  ----------------------------------------------------------------------------
*/
