/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:10:42 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/08 15:19:45 by wluedara         ###   ########.fr       */
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
	/* Change the head pointer to point to second node now */
	*stack = first->next; // 3 1 2 -> 1 2
	/* Set the next of first as NULL */
	first->next = NULL; // 3 1 2 -> 3
	/* Set the next of last as first */
	last->next = first; // 2 -> 2 3
}

void	rorotate(t_stack **ant, t_stack **bee, char mode)
{
	if (mode == 'a')
	{
		rotate(ant);
		write(1, "ra\n", 3);
	}
	else if (mode == 'b')
	{
		rotate(bee);
		write(1, "rb\n", 3);
	}
	else
	{
		rotate(ant);
		rotate(bee);
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
//stack 2 3 1 -> 2 3 -> 1 2 3
//hang =  	->	3 1 -> 3
//tmp = 2 3 1 -> 1   -> 1 2 3
void	rerotate_ab(t_stack **ant, t_stack **bee, char mode)
{
	if (mode == 'a')
	{
		rerotate(ant);
		write(1, "rra\n", 4);
	}
	else if (mode == 'b')
	{
		rerotate(bee);
		write(1, "rrb\n", 4);
	}
	else
	{
		rerotate(ant);
		rerotate(bee);
		write(1, "rrr\n", 4);
	}
}
