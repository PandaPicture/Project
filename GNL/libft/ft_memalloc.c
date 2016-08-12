/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 13:00:30 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 13:37:11 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *zone;

	zone = malloc((sizeof(size_t)) * size);
	if (zone == NULL)
		return (NULL);
	ft_bzero(zone, size);
	return (zone);
}
