/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 18:17:24 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:44:37 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	min;

	min = -2147483648;
	if (n == min)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0 && n > min)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10 && n > min)
		ft_putchar_fd(n + 48, fd);
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
