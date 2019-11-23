/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 12:10:24 by waddam            #+#    #+#             */
/*   Updated: 2019/11/23 01:28:20 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	size_t	len;

	temp = (char *)s;
	len = 0;
	while (*temp)
	{
		len++;
		temp++;
	}
	if (*temp == c)
		return (temp);
	temp--;
	while (len > 0)
	{
		if (*temp == c)
			return (temp);
		len--;
		temp--;
	}
	return (NULL);
}
