/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 19:09:37 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 11:31:14 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	var;

	var = (int)ft_strlen(s);
	while (var >= 0)
	{
		if (s[var] == (char)c)
			return (&(((char*)s)[var]));
		var--;
	}
	return (NULL);
}
