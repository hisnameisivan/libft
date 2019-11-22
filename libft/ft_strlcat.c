/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 22:08:27 by waddam            #+#    #+#             */
/*   Updated: 2019/11/23 00:10:50 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = 0;
	srclen = 0;
	while (*(dst + dstlen))
		dstlen++;
	while (*(src + srclen))
		srclen++;
	if (dstsize > dstlen)
	{
		dst += dstlen;
		dstsize -= dstlen;
		while (*src && dstsize > 1)
		{
			dstsize--;
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return ((dstsize > dstlen ? dstlen : dstsize) + srclen);
}
