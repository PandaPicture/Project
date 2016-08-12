/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 16:39:02 by embailla          #+#    #+#             */
/*   Updated: 2016/02/26 17:35:28 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	var;

	var = 0;
	while (var < n)
	{
		((char*)dst)[var] = ((char*)src)[var];
		var++;
	}
	return (dst);
}
