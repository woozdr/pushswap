/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 06:56:44 by lmarti            #+#    #+#             */
/*   Updated: 2015/03/06 10:39:13 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push.h>

static void	swap(int *a, int *b)
{
	int		swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void		sa(void)
{
	t_data	*d;

	d = get_data();
	if (d->nba > 1)
		swap((&(*d->a)->nb), (&(*d->a)->nxt->nb));
}

void		sb(void)
{
	t_data	*d;

	d = get_data();
	if (d->nbb > 1)
		swap((&(*d->b)->nb), (&(*d->b)->nxt->nb));
}

void		ss(void)
{
	sa();
	sb();
}
