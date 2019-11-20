/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contentdel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 22:24:15 by waddam            #+#    #+#             */
/*   Updated: 2019/11/21 00:38:41 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Free memory after overwriting
*/

#include "libft.h"

void	ft_contentdel(void *content, size_t size)
{
	unsigned char	*temp;

	if (content)
	{
		temp = (unsigned char *)content;
		while (size > 0)
		{
			*temp = 0;
			temp++;
			size--;
		}
		free(content);
	}
}
