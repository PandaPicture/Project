/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 16:02:03 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 10:41:46 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	var;
	size_t	var2;

	var = ft_strlen(s1);
	var2 = 0;
	while (s2[var2] != '\0' && var2 < n)
	{
		s1[var + var2] = s2[var2];
		var2++;
	}
	s1[var + var2] = '\0';
	return (s1);
}
