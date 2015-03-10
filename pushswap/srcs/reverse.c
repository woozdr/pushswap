/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 07:27:13 by lmarti            #+#    #+#             */
/*   Updated: 2015/03/10 08:40:56 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push.h>

static void	reverse(t_lst **lst)
{
	*lst = (*lst)->prv;
}

void		rra(void)
{
	t_data	*d;

	d = get_data();
	if (d->nba < 1)
		return ;
	reverse(d->a);
}

void		rrb(void)
{
	t_data	*d;

	d = get_data();
	if (d->nbb < 1)
		return ;
	reverse(d->b);
}

void		rrr(void)
{
	rra();
	rrb();
}
