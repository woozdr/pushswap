/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:17:29 by lmarti            #+#    #+#             */
/*   Updated: 2013/12/22 00:45:54 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	const char	*src;
	char		*dst;
	char		current;

	dst = s1;
	src = s2;
	while (n)
	{
		current = *src++;
		*dst++ = current;
		if (current == (char)c)
			return (dst);
		--n;
	}
	return (0);
}
