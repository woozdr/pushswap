/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 19:22:30 by lmarti            #+#    #+#             */
/*   Updated: 2014/01/12 12:43:09 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*ret;
	size_t			i;

	i = 0;
	ret = (unsigned char *)malloc(sizeof(unsigned char) * size);
	if (!ret)
		return (NULL);
	while (i < size)
	{
		ret[i] = 0;
		++i;
	}
	return ((unsigned char *)ret);
}
