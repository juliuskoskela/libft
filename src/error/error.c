/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 01:10:58 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/03 02:59:04 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	error(char *message)
{
	p_str(message);
	exit(-1);
}

/*
**  ----------------------------------------------------------------------------
**
**	Error
**
**	Prints an error message passed as an argument and exits the program.
**
**  ----------------------------------------------------------------------------
*/
