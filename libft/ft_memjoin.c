/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 00:26:30 by waddam            #+#    #+#             */
/*   Updated: 2020/08/30 03:20:36 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a memory area, result of the concatenation of s1 and
** s2. If the allocation fails the function returns NULL.
*/

#include "libft.h"

void	*ft_memjoin(void const *s1, const void *s2, size_t size1, size_t size2)
{
	unsigned char	*result;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;
	size_t			i;

	result = NULL;
	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	i = -1;
	if ((size1 + 1) == 0 || (size2 + 1) == 0
	|| !(result = (unsigned char *)malloc(size1 + size2)))
		return (NULL);
	while (s1 && (size1-- > 0))
		*(result + ++i) = *temp_s1++;
	while (s2 && (size2-- > 0))
		*(result + ++i) = *temp_s2++;
	return (result);
}
