/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:54:13 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/20 18:54:14 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t				hash1(char *key)
{
	size_t			hash;
	size_t			i;
	size_t			len;

	len = s_len(key);
	hash = 0;
	i = 0;
	while (i < len)
	{
		hash += key[i];
		hash += (hash << 10);
		hash ^= (hash >> 6);
		i++;
	}
	hash += (hash << 3);
	hash ^= (hash >> 11);
	hash += (hash << 15);
	return (hash % CAPACITY);
}

/*
**  ----------------------------------------------------------------------------
**
**	Hash1
**
**	Hashing method 1.
**
**  ----------------------------------------------------------------------------
*/
