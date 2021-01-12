/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_print_mtx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 06:08:20 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/11 06:37:20 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		g_print_mtx(t_mtx4 m)
{
	printf("%-4.4s| c1  | c2  | c3  | c4 \n", m.name);
	printf("----|-----|-----|-----|-----\n");
	printf("r1  | %.1f | %.1f | %.1f | %.1f \n", m.v1.x, m.v1.y, m.v1.z, m.v1.w);
	printf("r2  | %.1f | %.1f | %.1f | %.1f \n", m.v2.x, m.v2.y, m.v2.z, m.v2.w);
	printf("r3  | %.1f | %.1f | %.1f | %.1f \n", m.v3.x, m.v3.y, m.v3.z, m.v3.w);
	printf("r4  | %.1f | %.1f | %.1f | %.1f \n\n", m.v4.x, m.v4.y, m.v4.z, m.v4.w);
}
