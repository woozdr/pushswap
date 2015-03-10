/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 06:58:01 by lmarti            #+#    #+#             */
/*   Updated: 2015/03/10 07:04:21 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push.h>
#include <stdlib.h>

static void	push(t_lst **l1, t_lst **l2)
{
	t_lst	*tmp1;
	t_lst	*tmp2;

	tmp1 = *l1;
	tmp1->nxt->prv = tmp1->prv;
	tmp1->prv->nxt = tmp1->nxt;
	tmp2 = tmp1;
	tmp1 = tmp1->nxt;
	*l1 = tmp1;
	if (!*l2)
	{
		tmp2->nxt = tmp2;
		tmp2->prv = tmp2;
	}
	else
	{
		tmp2->nxt = *l2;
		tmp2->prv = (*l2)->prv;
		(*l2)->prv->nxt = tmp2;
		(*l2)->prv = tmp2;
	}
	*l2 = tmp2;
}

void		pa(void)
{
	t_data	*d;

	d = get_data();
	if (d->nbb < 1)
		return ;
	push(d->b, d->a);
	d->nba++;
	d->nbb--;
	if (!d->nbb)
		(*d->b) = NULL;
}

void		pb(void)
{
	t_data	*d;

	d = get_data();
	if (d->nba < 1)
		return ;
	push(d->a, d->b);
	d->nba--;
	d->nbb++;
	if (!d->nba)
		(*d->a) = NULL;
}
