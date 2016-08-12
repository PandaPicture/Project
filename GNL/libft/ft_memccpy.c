/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 18:14:46 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:48:10 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, void *restrict src, int c, size_t n)
{
	size_t	var;

	var = 0;
	while (var < n)
	{
		*((unsigned char*)dst + var) = *((unsigned char*)src + var);
		if (*((unsigned char*)src + var) == (unsigned char)c)
			return ((unsigned char*)dst + var + 1);
		var++;
	}
	return (NULL);
}
