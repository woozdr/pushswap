/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 06:41:03 by lmarti            #+#    #+#             */
/*   Updated: 2015/03/06 10:39:13 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push.h>
#include <stdlib.h>
#include <libft.h>

inline t_data		*get_data(void)
{
	static t_data	*d;

	if (!d)
		if (!(d = (t_data*)malloc(sizeof(t_data))))
			error();
	return (d);
}

static int			check(char	*nbr)
{
	t_data	*d;
	t_lst	*tmp;
	UINT	i;
	int		nb;

	if (*nbr && *nbr == '0')
		nb = 0;
	else if (!(nb = ft_atoi(nbr)))
		error();
	d = get_data();
	i = 0;
	tmp = (*d->a);
	while (i < d->nba)
	{
		if (nb == tmp->nb)
			error();
		tmp = tmp->nxt;
		++i;
	}
	return (nb);
}

static void			push_back(t_lst **a, char *nbr)
{
	t_lst	*tmp;

	if (!(tmp = (t_lst *)malloc(sizeof(t_lst))))
		error();
	tmp->nb = check(nbr);
	tmp->prv = (*a)->prv;
	tmp->nxt = *a;
	(*a)->prv->nxt = tmp;
	(*a)->prv = tmp;
}

void				push_lst(char **av)
{
	t_data	*d;
	UINT	i;

	d = get_data();
	if (!((*d->a) = (t_lst *)malloc(sizeof(t_lst))))
		error();
	(*d->a)->nb = check(av[1]);
	(*d->a)->nxt = (*d->a);
	(*d->a)->prv = (*d->a);
	d->nba++;
	i = 2;
	while (i <= d->elem)
	{
		push_back(d->a, av[i]);
		++i;
		d->nba++;
	}
}
