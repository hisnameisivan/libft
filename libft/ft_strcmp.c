/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:49:25 by waddam            #+#    #+#             */
/*   Updated: 2019/11/22 00:00:25 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ts1;
	unsigned char	*ts2;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	while (*ts1 == *ts2 && *ts1 && *ts2)
	{
		ts1++;
		ts2++;
	}
	return (*ts1 - *ts2);
}
