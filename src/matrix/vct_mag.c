/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_mag.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:19:38 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 00:20:12 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

double		vct_mag(double *vct)
{
	return (sqrt(pow(vct[0], 2) + pow(vct[1], 2) + pow(vct[2], 2)));
}

/*
**  ----------------------------------------------------------------------------
**
**	vct_mag
**
**	Calculate vector magnitude.
**
**  ----------------------------------------------------------------------------
*/