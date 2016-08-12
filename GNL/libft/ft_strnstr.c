/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 13:09:29 by embailla          #+#    #+#             */
/*   Updated: 2016/02/26 17:22:27 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*buffer;
	char	*cpy;
	size_t	var;

	buffer = (char*)(big + len);
	var = ft_strlen(little);
	cpy = (char*)big;
	if (!little || !var)
		return ((char*)big);
	while ((cpy = ft_strchr(cpy, *little)) && cpy <= buffer)
	{
		if ((cpy + var <= buffer) && !ft_strncmp(cpy, little, var))
			return (cpy);
		cpy++;
	}
	return (NULL);
}
