/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:35:49 by ohachim           #+#    #+#             */
/*   Updated: 2018/11/07 21:36:41 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *src, char c)
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
