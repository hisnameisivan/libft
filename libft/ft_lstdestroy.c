/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdestroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 21:15:10 by waddam            #+#    #+#             */
/*   Updated: 2019/12/03 23:56:08 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Frees up memory allocated for the list and its content (list without loop)
*/

#include "libft.h"

void	ft_lstdestroy(t_list **alst)
{
	t_list	*temp1;
	t_list	*temp2;

	if (alst)
	{
		temp1 = *alst;
		while (temp1)
		{
			free(temp1->content);
			temp2 = temp1->next;
			free(temp1);
			temp1 = temp2;
		}
		temp1 = NULL;
	}
}
