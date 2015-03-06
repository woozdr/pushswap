/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 07:21:18 by lmarti            #+#    #+#             */
/*   Updated: 2015/03/06 05:11:28 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push.h>

static void	rotate(t_lst *lst)
{
	lst = lst->nxt;
}

void		ra(void)
{
	t_data	*d;

	d = get_data();
	if (d->nba < 1)
		return ;
	rotate((*d->a));
}

void		rb(void)
{
	t_data	*d;

	d = get_data();
	if (d->nbb < 1)
		return ;
	rotate((*d->b));
}

void		rr(void)
{
	ra();
	rb();
}
