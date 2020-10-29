/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_digits_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 01:22:32 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/29 01:25:25 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t		m_digits_base(uint64_t nb, uint64_t base)
{
	return ((uint64_t)((m_log(nb) / m_log(base)) + 1));
}

/*
**  ----------------------------------------------------------------------------
**
**	M__digits_base
**
**	Calculate number of digits in `nb` in `base`. floor(log(nb) / log(base)
**
**  ----------------------------------------------------------------------------
*/
