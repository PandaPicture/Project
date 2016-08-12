/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 17:42:38 by embailla          #+#    #+#             */
/*   Updated: 2016/02/28 13:46:38 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t var;

	var = 0;
	while (s1[var] != '\0' && var < n)
	{
		if (s2[var] == '\0')
			return ((unsigned char)s1[var] - (unsigned char)s2[var]);
		if (s1[var] != s2[var])
		{
			if (s1[var] > s2[var])
				return ((unsigned char)s1[var] - (unsigned char)s2[var]);
			else
				return ((unsigned char)s1[var] - (unsigned char)s2[var]);
		}
		var++;
	}
	if (s2[var] != '\0' && var != n)
		return ((unsigned char)s1[var] - (unsigned char)s2[var]);
	return (0);
}
