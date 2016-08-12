/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/21 15:38:29 by embailla          #+#    #+#             */
/*   Updated: 2016/06/23 16:00:49 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		end_of_file(t_stock *stock)
{
	while (stock->lu > stock->rest - stock->s
			&& *(stock->rest) != '\n')
		stock->rest++;
	if (*(stock->rest) == '\n')
		return (stock->lu > stock->rest - stock->s);
	return (0);
}

static int		ft_realloc(t_stock *stock)
{
	char		*new_s;
	long		new_size;

	new_size = stock->length * 2;
	if (new_size < stock->length + BUFF_SIZE)
		new_size += BUFF_SIZE;
	new_s = malloc((new_size + 1) * sizeof(char));
	if (!new_s)
		return (1);
	new_s = ft_memset(new_s, '\0', new_size);
	ft_strcpy(new_s, stock->s);
	new_s[new_size] = '\0';
	stock->rest = new_s + (stock->rest - stock->s);
	free(stock->s);
	stock->s = new_s;
	stock->length = new_size;
	return (0);
}

static int		ft_malloc(t_stock **stock)
{
	*stock = malloc(sizeof(t_stock));
	if (!*stock)
		return (1);
	(*stock)->length = BUFF_SIZE;
	(*stock)->s = malloc(((*stock)->length + 1) * sizeof(char));
	if (!(*stock)->s)
		return (1);
	(*stock)->s = ft_memset((*stock)->s, '\0', BUFF_SIZE);
	(*stock)->s[(*stock)->length] = '\0';
	(*stock)->lu = 0;
	(*stock)->rest = (*stock)->s;
	(*stock)->rd = 1;
	return (0);
}

static int		returns(t_stock **ptr_to_stock
		, t_stock *stock, char **line)
{
	if (stock->rd < 0)
	{
		*ptr_to_stock = NULL;
		return (-1);
	}
	*line = ft_strsub(stock->s, 0, stock->rest - stock->s);
	if ((stock->rd <= 0 || stock->lu <= 0))
	{
		if (stock->s)
			free(stock->s);
		free(stock);
		*ptr_to_stock = NULL;
		if ((*line)[0] == '\0')
			return (0);
	}
	stock->lu += stock->s - stock->rest
		- (stock->rd > 0
				&& *(stock->rest) == '\n'
				&& stock->lu != stock->rest - stock->s);
	ft_memcpy(stock->s, stock->rest + 1, stock->lu);
	stock->rest = stock->s;
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static t_stock	*str[MAX_FD];

	if (fd >= MAX_FD || fd < 0 || line == NULL)
		return (-1);
	if (str[fd] && str[fd]->rd == 0)
		return (0);
	if (!str[fd] && ft_malloc(&str[fd]))
		return (-1);
	while (str[fd]->rd > 0 && !((end_of_file(str[fd]))))
	{
		while (str[fd]->lu + BUFF_SIZE > str[fd]->length)
			if (ft_realloc(str[fd]))
				return (-1);
		str[fd]->rd = read(fd, str[fd]->s + str[fd]->lu, BUFF_SIZE);
		str[fd]->lu += str[fd]->rd;
	}
	return (returns(&str[fd], str[fd], line));
}
