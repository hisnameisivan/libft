/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 10:36:25 by waddam            #+#    #+#             */
/*   Updated: 2019/11/12 00:15:42 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pre_atoi(const char **str)
{
	int		sign;

	sign = 1;
	while ((**str >= '\t' && **str <= '\r') || **str == ' ')
		(*str)++;
	if (**str == '+')
		(*str)++;
	else if (**str == '-')
	{
		sign = -1;
		(*str)++;
	}
	return (sign);
}

int			ft_atoill(const char *str)
{
	int					sign;
	unsigned long long	res;
	unsigned long long	temp;

	if (str == NULL)
		return (0);
	res = 0;
	sign = ft_pre_atoi(&str);
	while (*str >= '0' && *str <= '9')
	{
		temp = res * 10;
		if (((temp / 10) != res
		|| (res == FT_LONG_MAX / 10 && *str > '7')) && sign == 1)
			return (-1);
		if (((temp / 10) != res
		|| (res == FT_LONG_MAX / 10 && *str > '8')) && sign == -1)
			return (0);
		res = temp + (*str - '0');
		str++;
	}
	return ((int)(sign * res));
}
