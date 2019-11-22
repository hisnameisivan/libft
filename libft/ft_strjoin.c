/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 01:27:56 by waddam            #+#    #+#             */
/*   Updated: 2019/11/22 23:20:44 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;

	temp = NULL;
	i = -1;
	len_s1 = 0;
	len_s2 = 0;
	if (s1)
		while (s1[len_s1] != '\0')
			len_s1++;
	if (s2)
		while (s2[len_s2] != '\0')
			len_s2++;
	if ((len_s1 + len_s2) == 0
	|| !(temp = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
		return (NULL);
	while (len_s1-- > 0)
		*(temp + ++i) = *s1++;
	while (len_s2-- > 0)
		*(temp + ++i) = *s2++;
	*(temp + ++i) = '\0';
	return (temp);
}
