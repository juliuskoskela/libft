/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_addnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:26:01 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/23 00:17:40 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		fd_addnbr(int n, int fd)
{
	if (n == -2147483648)
		fd_addstr("-2147483648", fd);
	else if (n < 0)
	{
		fd_addchar('-', fd);
		fd_addnbr(-n, fd);
	}
	else if (n >= 10)
	{
		fd_addnbr(n / 10, fd);
		fd_addchar(n % 10 + '0', fd);
	}
	else
		fd_addchar(n + '0', fd);
}

/*
**  ----------------------------------------------------------------------------
**
**	Fd_addnbr
**
**	Add a number to a file.
**
**  ----------------------------------------------------------------------------
*/
