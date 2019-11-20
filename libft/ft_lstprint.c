/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 22:59:53 by waddam            #+#    #+#             */
/*   Updated: 2019/11/21 01:19:22 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print content of the list's node (list without loop)
*/

#include "libft.h"

void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		ft_putendl((char *)lst->content);
		lst = lst->next;
	}
}
