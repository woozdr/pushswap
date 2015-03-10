/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarti <lmarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 04:33:01 by lmarti            #+#    #+#             */
/*   Updated: 2015/03/10 08:40:56 by lmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# define UINT unsigned int
#include <stdio.h>
#include <stdbool.h>

enum				e_op
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
};

typedef struct		s_lst
{
	int				nb;
	struct s_lst	*nxt;
	struct s_lst	*prv;
}					t_lst;

typedef struct		s_data
{
	t_lst			**a;
	t_lst			**b;
	UINT			nba;
	UINT			nbb;
	UINT			nbop;
	UINT			elem;
	void			(*op[11])(void);
}					t_data;

/*
** --------------- main.c ---------------
*/

void				print(t_lst **l, UINT size);

/*
** --------------- error.c ---------------
*/

void				error(void);

/*
** --------------- tools.c ---------------
*/

t_data				*get_data(void);
void				push_lst(char **av);

/*
** --------------- swap.c ---------------
*/

void				sa(void);
void				sb(void);
void				ss(void);

/*
** --------------- push.c ---------------
*/

void				pa(void);
void				pb(void);

/*
** --------------- rotate.c ---------------
*/

void				ra(void);
void				rb(void);
void				rr(void);

/*
** --------------- reverse.c ---------------
*/

void				rra(void);
void				rrb(void);
void				rrr(void);

/*
** --------------- algo.c ---------------
*/

void				algo(void);

#endif
