/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 23:58:07 by waddam            #+#    #+#             */
/*   Updated: 2019/11/12 00:26:52 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO:	тест ft_pre_main_base()

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

static void	ft_pre_main_base(const char **str, int base)
{
	if (base == 2)
	{
		if (ft_strncmp(*str, "0b", 2) == 0)
			(*str) += 2;
		// while (**str == '0')
		// 	(*str)++;
	}
	// else if (base == 8)
	// {
	// 	if (**str == '0')
	// 		(*str)++;
	// }
	else if (base == 16)
	{
		if (ft_strncmp(*str, "0x", 2) == 0 || ft_strncmp(*str, "0X", 2) == 0)
			(*str) += 2;
		// while (**str == '0')
		// 	(*str)++;
	}
}

int			ft_atoi_base(const char *str, int str_base)
{
	unsigned long	result;
	int				sign;

	if (str_base < 2 || str_base > 16 || str == NULL)
		return (0);
	result = 0;
	sign = ft_pre_atoi(&str);
	ft_pre_main_base(&str, str_base);
	while (*str >= '0' && *str < str_base + '0')
	{
		if (*str - '0' <= 10)
			result = result * str_base + (*str - '0');
		else
			result = result * str_base + (*str - ((*str >= 'a') ? 'a' : 'A') + 10);
		if (result > FT_LONG_MAX && sign == 1)
			return (-1);
		if (result > FT_LONG_MAX + 1 && sign == -1)
			return (0);
		str++;
	}
	return ((int)(sign * result));
}
