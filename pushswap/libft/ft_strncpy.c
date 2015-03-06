/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:47:35 by lmarti            #+#    #+#             */
/*   Updated: 2013/11/26 23:32:20 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s2[i])
			s1[i] = s2[i];
		else if (s1[i])
		{
			while (i < n)
			{
				s1[i] = '\0';
				++i;
			}
			return (s1);
		}
		++i;
	}
	return (s1);
}
