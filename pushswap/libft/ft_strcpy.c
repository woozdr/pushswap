/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:19:50 by lmarti            #+#    #+#             */
/*   Updated: 2014/03/19 02:59:15 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	char	*tmp1;
	char	*tmp2;

	tmp1 = s1;
	tmp2 = (char *)s2;
	while (*tmp2)
		*tmp1++ = *tmp2++;
	*tmp1 = *tmp2;
	return (s1);
}
