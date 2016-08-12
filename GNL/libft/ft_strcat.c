/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 15:36:47 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:43:02 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int var;
	int var2;

	var = 0;
	var2 = 0;
	if (s1[var] == '\0' && s2[var] == '\0')
		return (s1);
	while (s1[var] != '\0')
		var++;
	while (s2[var2] != '\0')
	{
		s1[var] = s2[var2];
		var++;
		var2++;
	}
	s1[var++] = '\0';
	return (s1);
}
