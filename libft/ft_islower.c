/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waddam <waddam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 23:56:19 by waddam            #+#    #+#             */
/*   Updated: 2019/11/13 00:50:25 by waddam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(char c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
