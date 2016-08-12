/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 11:35:55 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:36:55 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int	var;
	int var2;
	int varlen;

	var = 0;
	var2 = 0;
	varlen = 0;
	while (little[varlen] != '\0')
		varlen++;
	if (varlen == 0)
		return ((char *)big);
	while (big[var])
	{
		while (little[var2] == big[var + var2])
		{
			if (var2 == varlen - 1)
				return ((char *)big + var);
			var2++;
		}
		var2 = 0;
		var++;
	}
	return (0);
}
