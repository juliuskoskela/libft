/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_addstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:26:07 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 10:03:32 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void		fd_addstr(char const *s, int fd)
{
	write(fd, s, s_len(s));
}

/*
**  ----------------------------------------------------------------------------
**
**	Fd_addstr
**
**	Add a string to a file.
**
**  ----------------------------------------------------------------------------
*/
