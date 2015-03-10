/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 05:57:56 by lmarti            #+#    #+#             */
/*   Updated: 2015/03/10 11:37:54 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push.h>
#include <libft.h>

static bool	is_sort(void)
{
	t_data	*d;
	UINT	i;
	t_lst	*tmp;

	d = get_data();
	if (d->elem > d->nba)
		return (false);
	i = -1;
	tmp = (*d->a);
	while (++i < d->nba - 1)
	{
		if (tmp->nb > tmp->nxt->nb)
			return (false);
		tmp = tmp->nxt;
	}
	return (true);
}

void		algo(void)
{
	t_data	*d;
	UINT	i;
	UINT	el;
	bool	end;

	d = get_data();
	el = d->nba;
	end = false;
	while (!end && !is_sort())
	{
		i = -1;
		end = true;
		while (++i < el - 1)
		{
			if ((*d->a)->nb > (*d->a)->nxt->nb)
			{
				d->op[SA]();
				ft_putstr("sa ");
				//print(d->a, d->nba);
				end = false;
				if (is_sort())
				{
					end = true;
					break ;
				}
			}
			d->op[RA]();
			ft_putstr("ra ");
			//print(d->a, d->nba);
		}
		if (is_sort())
		{
			end = true;
			break ;
		}
		d->op[RA]();
		ft_putstr("ra ");
		//print(d->a, d->nba);
	}
/*	d->op[SA]();
	ft_putstr("sa ");
	d->op[RA]();
	ft_putstr("ra ");*/

	/*while (!is_sort())
	{
		i = -1;
		while (++i < d->nba - 1)
		{
			if ((*d->a)->nb > (*d->a)->nxt->nb)
			{
				d->op[SA]();
				ft_putstr("sa ");
				print(d->a, d->nba);
			}
			if (is_sort())
				return ;
			if ((*d->a)->nb > (*d->a)->prv->nb)
			{
				d->op[RRA]();
				ft_putstr("rra ");
			}
			if (is_sort())
				return ;
			d->op[RA]();
			ft_putstr("ra ");
			print(d->a, d->nba);
			if (is_sort())
				return ;
		}
		d->op[RA]();
		ft_putstr("ra ");
		//d->op[RA]();
		//ft_putstr("ra ");
	}*/
	//print(d->a, d->nba);
	//printf("is sort\n");

}
