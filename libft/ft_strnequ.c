/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 23:18:03 by waddam            #+#    #+#             */
/*   Updated: 2019/11/23 01:15:50 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (1);
	if (s1 && s2)
	{
		while (*s1 && *s2)
		{
			if (*s1 == *s2 && n-- > 1)
			{
				s1++;
				s2++;
				continue ;
			}
			if (n != 0)
				return (0);
			else
				break ;
		}
		if (*s1 > *s2 || *s1 < *s2)
			return (0);
		return (1);
	}
	else if (!s1 && !s2)
		return (1);
	else
		return (0);
}
