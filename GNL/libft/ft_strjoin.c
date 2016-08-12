/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 11:47:00 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:38:41 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		var;
	int		var2;

	var = ft_strlen(s1) + ft_strlen(s2);
	str = (char*)malloc((var + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	var = 0;
	var2 = 0;
	while (s1[var2] != '\0')
	{
		str[var] = s1[var2];
		var++;
		var2++;
	}
	var2 = 0;
	while (s2[var2] != '\0')
	{
		str[var] = s2[var2];
		var++;
		var2++;
	}
	str[var] = '\0';
	return (str);
}
