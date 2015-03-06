/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:48:49 by lmarti            #+#    #+#             */
/*   Updated: 2014/01/12 12:42:01 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sub_strn(const char *s1, const char *s2, size_t n, int i)
{
	while (*s2 == s1[i] && *s2 && i < (int)n)
	{
		++s2;
		++i;
	}
	if (!*s2)
		return (1);
	return (0);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = 0;
	if (*s2)
	{
		while (s1[i] && i < (int)n)
		{
			if (s1[i] == *s2)
			{
				if (ft_sub_strn(s1, s2, n, i))
					return ((char *)&s1[i]);
			}
			i++;
		}
		return (0);
	}
	return ((char *)s1);
}
