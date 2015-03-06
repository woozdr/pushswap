/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 04:21:48 by lmarti            #+#    #+#             */
/*   Updated: 2015/03/06 10:39:13 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push.h>
#include <stdlib.h>

static void	print(t_lst **l, UINT size)
{
	t_lst	*tmp;
	tmp = *l;
	for(UINT i=0; i < size ;i++)
	{
		printf("lst[%d] = %d\n", i, tmp->nb);
		tmp = tmp->nxt;
	}
	printf("\n");
}

static void	init(int ac, char **av)
{
	t_data	*d;

	d = get_data();
	d->elem = ac - 1;
	d->nbop = 0;
	d->nba = 0;
	d->nbb = 0;
	if (!(d->a = (t_lst **)malloc(sizeof(t_lst *))))
		error();
	if (!(d->b = (t_lst **)malloc(sizeof(t_lst *))))
		error();
	push_lst(av);
	print(d->a, d->nba);
	print(d->b, d->nbb);
	sa();
	printf("sa\n");
	print(d->a, d->nba);
	print(d->b, d->nbb);
	pb();
	printf("pb\n");
	print(d->a, d->nba);
	print(d->b, d->nbb);
	pb();
	printf("pb\n");
	print(d->a, d->nba);
	print(d->b, d->nbb);
	pb();
	printf("pb\n");
	print(d->a, d->nba);
	print(d->b, d->nbb);
	sa();
	printf("sa\n");
	print(d->a, d->nba);
	print(d->b, d->nbb);
	pa();
	printf("pa\n");
	print(d->a, d->nba);
	print(d->b, d->nbb);
	pa();
	printf("pa\n");
	print(d->a, d->nba);
	print(d->b, d->nbb);
	pa();
	printf("pa\n");
	print(d->a, d->nba);
	print(d->b, d->nbb);
}

int			main(int ac, char **av)
{
	if (ac < 2)
		error();
	init(ac, av);
	return (0);
}
