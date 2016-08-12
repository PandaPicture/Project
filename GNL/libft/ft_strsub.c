/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 11:34:19 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:36:30 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	var;
	char	*str;

	if (s == NULL)
		return (NULL);
	var = ft_strlen(s);
	str = NULL;
	if ((start + len) <= var)
	{
		str = (char*)malloc(sizeof(char) * (len + 1));
		if (str)
		{
			str = ft_strncpy(str, s + start, len);
			str[len] = '\0';
		}
	}
	return (str);
}
