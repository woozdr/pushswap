/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:36:45 by lmarti            #+#    #+#             */
/*   Updated: 2013/12/22 00:51:34 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s)
		return (0);
	ret = ft_strnew(len);
	if (!ret)
		return (0);
	i = 0;
	while (i < len)
	{
		ret[i] = s[start];
		++i;
		++start;
	}
	return (ret);
}
