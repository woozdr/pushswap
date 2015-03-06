/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:22:56 by lmarti            #+#    #+#             */
/*   Updated: 2013/11/26 15:10:51 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*ret;

	if (!s || !f)
		return (0);
	i = 0;
	ret = ft_strnew(ft_strlen(s));
	if (!ret)
		return (0);
	while (s[i])
	{
		ret[i] = f(s[i]);
		++i;
	}
	return (ret);
}
