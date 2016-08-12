/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:00:50 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 12:56:29 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int var;
	int var2;

	var = 0;
	var2 = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			var2 = -1;
		str++;
	}
	while (str[0] >= 48 && str[0] <= 57)
	{
		var = var * 10 + (str[0] - '0');
		str++;
	}
	return (var * var2);
}
