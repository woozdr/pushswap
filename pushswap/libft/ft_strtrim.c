/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:22:37 by lmarti            #+#    #+#             */
/*   Updated: 2014/01/12 12:41:41 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_blank(const char *s)
{
	unsigned int	i;
	unsigned int	blank;

	i = 0;
	blank = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		++i;
		++blank;
	}
	if (!s[i])
		return (blank);
	while (s[i])
		++i;
	--i;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		--i;
		++blank;
	}
	return (blank);
}

char		*ft_strtrim(char const *s)
{
	char	*ret;
	size_t	size;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	size = ft_strlen(s) - ft_blank(s);
	if (!size)
		ret = ft_strnew(size + 1);
	else
		ret = ft_strnew(size);
	if (!ret)
		return (0);
	i = 0;
	j = 0;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		++j;
	while (i < size)
	{
		ret[i] = s[j];
		++i;
		++j;
	}
	return (ret);
}
