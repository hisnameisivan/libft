/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 10:36:25 by waddam            #+#    #+#             */
/*   Updated: 2019/10/31 01:14:51 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	result;
	unsigned long long	temp;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		temp = result * 10;
		if (((temp / 10) != result) && sign == 1)
			return (-1);
		if (((temp / 10) != result) && sign == -1)
			return (0);
		result = temp + (*str - '0');
		// if ((((result * 10) / 10) != result) && sign == 1)
		// 	return (-1);
		// if ((((result * 10) / 10) != result) && sign == -1)
		// 	return (0);
		// result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(sign * result));
}
