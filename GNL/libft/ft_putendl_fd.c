/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 16:24:36 by embailla          #+#    #+#             */
/*   Updated: 2016/02/16 18:17:13 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int var;

	var = 0;
	while (s[var] != '\0')
	{
		ft_putchar_fd(s[var], fd);
		var++;
	}
	ft_putchar_fd('\n', fd);
}
