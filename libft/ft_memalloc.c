/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 21:30:16 by waddam            #+#    #+#             */
/*   Updated: 2019/11/21 01:10:42 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*temp;
	size_t			i;

	if (size == 0 || !(temp = (unsigned char *)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
