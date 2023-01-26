/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:10:42 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/26 12:24:51 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = find_last(stack);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	rorotate(t_stack **ant, t_stack **bee, char mode, int pim)
{
	if (mode == 'a')
	{
		rotate(ant);
		if (pim == 1)
			write(1, "ra\n", 3);
	}
	else if (mode == 'b')
	{
		rotate(bee);
		if (pim == 1)
			write(1, "rb\n", 3);
	}
	else
	{
		rotate(ant);
		rotate(bee);
		if (pim == 1)
			write(1, "rr\n", 3);
	}
}

void	rerotate(t_stack **stack)
{
	t_stack	*hang;
	t_stack	*tmp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	hang = NULL;
	tmp = *stack;
	while (tmp->next != NULL)
	{
		hang = tmp;
		tmp = hang->next;
	}
	hang->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
}

void	rerotate_ab(t_stack **ant, t_stack **bee, char mode, int pim)
{
	if (mode == 'a')
	{
		rerotate(ant);
		if (pim == 1)
			write(1, "rra\n", 4);
	}
	else if (mode == 'b')
	{
		rerotate(bee);
		if (pim == 1)
			write(1, "rrb\n", 4);
	}
	else
	{
		rerotate(ant);
		rerotate(bee);
		if (pim == 1)
			write(1, "rrr\n", 4);
	}
}
