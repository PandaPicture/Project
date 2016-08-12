/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 15:17:41 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 11:43:02 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t var;

	var = 0;
	while (var < len && src[var] != '\0')
	{
		dst[var] = src[var];
		var++;
	}
	while (var < len)
	{
		dst[var] = '\0';
		var++;
	}
	return (dst);
}
