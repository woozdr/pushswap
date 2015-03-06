/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_fast.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 15:31:44 by lmarti            #+#    #+#             */
/*   Updated: 2014/02/16 15:34:56 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(long *tmp1, long *tmp2)
{
	const char		*c1;
	const char		*c2;

	c1 = (const char *)tmp1;
	c2 = (const char *)tmp2;
	while ((*c1 == *c2) && (*c1 || *c2))
	{
		++c1;
		++c2;
	}
	return (*c1 - *c2);
}

int		ft_strcmp_fast(const char *s1, const char *s2)
{
	long			*tmp1;
	long			*tmp2;
	unsigned long	ltmp1;
	unsigned long	ltmp2;

	tmp1 = (long *)s1;
	tmp2 = (long *)s2;
	while (1)
	{
		ltmp1 = *tmp1;
		ltmp2 = *tmp2;
		if ((ltmp1 != ltmp2)
				|| ((ltmp1 - 0x0101010101010101) & ~ltmp1 & 0x8080808080808080)
				|| ((ltmp2 - 0x0101010101010101) & ~ltmp2 & 0x8080808080808080))
			return (ft_strcmp(tmp1, tmp2));
		++tmp1;
		++tmp2;
	}
}
