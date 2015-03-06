/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:04:25 by lmarti            #+#    #+#             */
/*   Updated: 2013/11/26 23:32:52 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	if (!s)
		return (0);
	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		--i;
	}
	if (s[i] == (char)c)
		return ((char *)s);
	return (0);
}
