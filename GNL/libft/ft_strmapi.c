/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 17:48:02 by embailla          #+#    #+#             */
/*   Updated: 2016/03/02 13:28:22 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		var;
	int		var2;
	char	*str;

	var2 = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	str = (char*)malloc(sizeof(char*) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	var = 0;
	while (var < var2)
	{
		str[var] = (*f)(var, s[var]);
		var++;
	}
	str[var] = '\0';
	return (str);
}
