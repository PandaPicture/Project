/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:36:39 by embailla          #+#    #+#             */
/*   Updated: 2016/03/03 16:26:59 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *tempo;

	if (!(tempo = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	ft_memcpy(tempo, src, len);
	ft_memcpy(dst, tempo, len);
	free(tempo);
	return (dst);
}
