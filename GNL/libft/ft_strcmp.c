/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 16:35:03 by embailla          #+#    #+#             */
/*   Updated: 2016/02/26 17:26:18 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int var;

	var = 0;
	while (s1[var] != '\0' && s2[var] != '\0' && s1[var] == s2[var])
		var++;
	return ((unsigned char)s1[var] - (unsigned char)s2[var]);
}
