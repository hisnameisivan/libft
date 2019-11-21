/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 00:13:02 by waddam            #+#    #+#             */
/*   Updated: 2019/11/22 01:14:35 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*temp;

	if (!(temp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		temp->content = NULL;
		temp->content_size = 0;
		temp->next = NULL;
	}
	else
	{
		if (!(temp->content = malloc(content_size)))
		{
			free(temp);
			return (NULL);
		}
		ft_memcpy(temp->content, content, content_size);
		temp->content_size = content_size;
		temp->next = NULL;
	}
	return (temp);
}
