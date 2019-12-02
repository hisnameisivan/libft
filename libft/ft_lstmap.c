/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:29:10 by waddam            #+#    #+#             */
/*   Updated: 2019/12/03 00:07:22 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*new;
	t_list	*temp;

	if (lst && f)
	{
		begin = NULL;
		temp = NULL;
		while (lst)
		{
			new = f(lst);
			if (temp)
				temp->next = new;
			else
				begin = new;
			lst = lst->next;
			temp = new;
		}
		return (begin);
	}
	return (NULL);
}
