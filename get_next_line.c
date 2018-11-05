/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 21:02:42 by ohachim           #+#    #+#             */
/*   Updated: 2018/11/04 14:13:11 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int		ft_ret_line_read(int ret, char c, size_t len)
{
	if (ret == -1)
		return (-1);
	if (ret == 0 && c == '\0' && !len)
		return (0);
	return (1);
}

char	*ft_strdupn(char *src, char c)
{
	char	*dupn;
	int		len;
	int		cn;

	cn = 0;
	len = 0;
	while (src[len] != '\0' && src[len] != c)
		len++;
	if (!(dupn = (char*)malloc(len + 1)))
		return (NULL);
	while (cn < len)
	{
		dupn[cn] = src[cn];
		cn++;
	}
	dupn[cn] = '\0';
	return (dupn);
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*fill[4096];
	int			ret;

	if (!line || BUFF_SIZE < 0 || read(fd, buf, 0) == -1 || fd < 0)
		return (-1);
	if (fill[fd] == NULL)
		fill[fd] = ft_strnew(1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		fill[fd] = ft_strjoin(fill[fd], buf);
		if ((ft_strchr(buf, '\n')))
			break ;
	}
	*line = ft_strdupn(fill[fd], '\n');
	while (*fill[fd] != '\n' && *fill[fd] != '\0')
		fill[fd]++;
	if (*fill[fd] == '\n')
	{
		fill[fd]++;
		return (1);
	}
	return (ft_ret_line_read(ret, *fill[fd], ft_strlen(*line)));
}
