/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/21 15:25:51 by embailla          #+#    #+#             */
/*   Updated: 2016/06/23 15:57:19 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

# define BUFF_SIZE		1
# define MAX_FD			1000

typedef struct		s_stock
{
	char			*s;
	long			length;
	long			lu;
	int				rd;
	char			*rest;
}					t_stock;

int					get_next_line(int fd, char **line);

#endif
