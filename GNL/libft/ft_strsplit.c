/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 13:05:15 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:35:18 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_word(char *s, char c)
{
	int nb;
	int i;

	nb = 0;
	while (*s)
	{
		i = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			nb++;
		}
		s++;
	}
	return (nb);
}

static	int	ft_word_len(char *s, char c)
{
	int nb;

	nb = 0;
	while (s[nb] && s[nb] != c)
		nb++;
	return (nb);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		var;
	int		var2;
	int		i;

	var2 = 0;
	i = 0;
	if (!(str = malloc((ft_count_word((char*)s, c) + 1) * sizeof(char*))))
		return (NULL);
	while (s[var2] != '\0')
	{
		while (s[var2] == c && s[var2] != '\0')
			var2++;
		if (s[var2] != c && s[var2] != '\0')
		{
			var = 0;
			if (!(str[i] = malloc((ft_word_len((char*)s + var2, c) + 1) * 1)))
				return (NULL);
			while (s[var2] != c && s[var2] != '\0')
				str[i][var++] = s[var2++];
			str[i++][var] = '\0';
		}
	}
	str[i] = NULL;
	return (str);
}
