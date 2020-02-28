/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 17:53:41 by waddam            #+#    #+#             */
/*   Updated: 2019/11/21 00:09:58 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Add a new node at the end of the list
*/

#include "libft.h"

void	ft_lstaddb(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (alst && *alst && new)
	{
		temp = *alst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
