/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:17:05 by lmarti            #+#    #+#             */
/*   Updated: 2014/01/19 21:41:26 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char	*tmp1;
	const char	*tmp2;

	if (!*s2)
		return ((char *)s1);
	tmp1 = s1;
	while (*tmp1)
	{
		tmp2 = s2;
		while (*tmp1 == *tmp2 && *tmp2)
		{
			++tmp1;
			++tmp2;
			if (!*tmp2)
				return ((char *)tmp1 - (tmp2 - s2));
		}
		++tmp1;
		tmp1 -= (tmp2 - s2);
	}
	return (0);
}
