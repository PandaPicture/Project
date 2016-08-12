/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 13:01:45 by embailla          #+#    #+#             */
/*   Updated: 2016/03/09 19:37:47 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void	const *content, size_t content_size)
{
	t_list	*list;
	void	*new;

	if (!(new = ft_memalloc(content_size + 1)))
		return (NULL);
	if (!content)
	{
		new = NULL;
		content_size = 0;
	}
	else
		ft_memcpy(new, content, content_size);
	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	list->content = new;
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
