/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 23:58:07 by waddam            #+#    #+#             */
/*   Updated: 2019/11/12 01:48:15 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pre_atoi(const char **str, int base)
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
	if ((base == 2
	&& ft_strncmp(*str, "0b", 2) == 0)
	|| (base == 16
	&& (ft_strncmp(*str, "0x", 2) == 0 || ft_strncmp(*str, "0X", 2) == 0)))
		(*str) += 2;
	return (sign);
}

int			ft_atoi_base(const char *str, int base)
{
	unsigned long	result;
	int				sign;

	if (base < 2 || base > 16 || str == NULL)
		return (0);
	result = 0;
	sign = ft_pre_atoi(&str, base);
	while ((*str >= '0' && *str <= '9')
	|| (*str >= 'a' && *str <= 'f') || (*str >= 'A' && *str <= 'F'))
	{
		if (*str - '0' <= 10)
			result = result * base + (*str - '0');
		else
			result = result * base + (*str - ((*str >= 'a') ? 'a' : 'A') + 10);
		if (result > FT_LONG_MAX && sign == 1)
			return (-1);
		if (result > FT_LONG_MAX + 1 && sign == -1)
			return (0);
		str++;
	}
	return ((int)(sign * result));
}
