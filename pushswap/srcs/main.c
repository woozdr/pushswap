/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 04:21:48 by lmarti            #+#    #+#             */
/*   Updated: 2015/03/10 08:40:56 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push.h>
#include <stdlib.h>

void	print(t_lst **l, UINT size)
{
	t_lst	*tmp;
	UINT	i;

	tmp = *l;
	i = -1;
	while (++i < size)
	{
		printf("lst[%d] = %d\n", i, tmp->nb);
		tmp = tmp->nxt;
	}
	printf("\n");
}

/*static void	del_lst(void)
{
	t_data	*d;
	t_lst	*tmp;

	d = get_data();
	if ((*d->a))
	{
		tmp = (*d->a);
		while (tmp->nxt)
		{
			free(tmp->prv);
			tmp = tmp->nxt;
		}
		free(tmp);
	}
	free(d->a);
	free(d->b);
	free(d);
	exit(EXIT_SUCCESS);
}*/

static void	init_func_array(void)
{
	t_data	*d;

	d = get_data();
	d->op[SA] = sa;
	d->op[SB] = sb;
	d->op[SS] = ss;
	d->op[PA] = pa;
	d->op[PB] = pb;
	d->op[RA] = ra;
	d->op[RB] = rb;
	d->op[RR] = rr;
	d->op[RRA] = rra;
	d->op[RRB] = rrb;
	d->op[RRR] = rrr;
}

static void	init(int ac, char **av)
{
	t_data	*d;

	d = get_data();
	if (!(d->a = (t_lst **)malloc(sizeof(t_lst *))))
		error();
	if (!(d->b = (t_lst **)malloc(sizeof(t_lst *))))
		error();
	d->elem = ac - 1;
	d->nbop = 0;
	d->nba = 0;
	d->nbb = 0;
	init_func_array();
	push_lst(av);
	print(d->a, d->nba);
	algo();
	print(d->a, d->nba);
	/*print(d->b, d->nbb);
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
	print(d->b, d->nbb);*/
}

int			main(int ac, char **av)
{
	if (ac < 2)
		error();
	init(ac, av);
	return (EXIT_SUCCESS);
}
