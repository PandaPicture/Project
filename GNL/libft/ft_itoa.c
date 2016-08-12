/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 14:59:40 by embailla          #+#    #+#             */
/*   Updated: 2016/02/26 19:18:46 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int var)
{
	int		len;

	len = 0;
	if (var < 0)
		len++;
	while (var)
	{
		len++;
		var /= 10;
	}
	return (len);
}

static char	*ft_intmax(void)
{
	char	*str;

	str = ft_strnew(12);
	ft_strcpy(str, "-2147483648");
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		var;

	if (n == -2147483648)
		return (ft_intmax());
	str = ft_strnew(ft_intlen(n));
	var = ft_intlen(n) - 1;
	if (str)
	{
		if (n < 0)
		{
			str[0] = '-';
			n *= -1;
		}
		if (n == 0)
			*str = '0';
		while (n > 0)
		{
			str[var] = '0' + (n % 10);
			n /= 10;
			var--;
		}
	}
	return (str);
}
