/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:50:39 by lmarti            #+#    #+#             */
/*   Updated: 2013/11/26 21:24:03 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*buf;

	buf = (unsigned char *)malloc(sizeof(unsigned char) * n);
	if (!buf)
		return (0);
	ft_memcpy(buf, s2, n);
	ft_memcpy(s1, buf, n);
	free(buf);
	return (s1);
}
