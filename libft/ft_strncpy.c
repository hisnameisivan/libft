/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:44:22 by waddam            #+#    #+#             */
/*   Updated: 2019/11/23 00:51:34 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	while (*(src + srclen))
		srclen++;
	while (i < len)
	{
		dst[i] = (i < srclen ? src[i] : '\0');
		i++;
	}
	return (dst);
}
