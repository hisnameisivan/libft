/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:51:03 by waddam            #+#    #+#             */
/*   Updated: 2020/09/02 11:48:56 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_read_file(const int fd, char **mas, char ***line)
{
	char		*temp;
	char		buf[BUFF_SIZE + 1];
	int			ret;

	ret = read(fd, buf, BUFF_SIZE);
	if (ret == -1)
		return (-1);
	if (ret == 0 && **mas == '\0')
		return (0);
	if (ret == 0 && **mas != '\0')
	{
		**line = *mas;
		*mas = NULL;
		return (1);
	}
	buf[ret] = '\0';
	temp = ft_strjoin(*mas, buf);
	free(*mas);
	*mas = temp;
	return (2);
}

int			get_next_line(const int fd, char **line)
{
	static char *mas[MAX_FD];
	char		*temp;
	char		buf[BUFF_SIZE + 1];
	int			ret;

	if (fd < 0 || fd > MAX_FD || BUFF_SIZE <= 0 || read(fd, buf, 0) == -1)
		return (-1);
	if (!mas[fd])
		mas[fd] = ft_strnew(0);
	while (!ft_strchr(mas[fd], DELIMITER))
	{
		if ((ret = ft_read_file(fd, &mas[fd], &line)) != 2)
			return (ret);
	}
	if ((temp = ft_strchr(mas[fd], DELIMITER)) != NULL)
	{
		*line = ft_strsub(mas[fd], 0, temp - mas[fd]);
		temp = ft_strsub(mas[fd], temp - mas[fd] + 1,
			ft_strlen(mas[fd]) - (temp - mas[fd]));
		free(mas[fd]);
		mas[fd] = temp;
	}
	else
		*line = ft_strdup(mas[fd]);
	return (1);
}
