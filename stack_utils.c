/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:10:08 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/05 14:11:38 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_hua(t_stack **stack, t_stack *hua)
{
	t_stack	*tmp;

	if (!hua)
		return ;
	tmp = hua;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack;
	*stack = hua;
}

void	add_hang(t_stack **stack, t_stack *hang)
{
	t_stack	*last;

	if (*stack == NULL)
	{
		*stack = hang;
		return ;
	}
	last = *stack;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = hang;
}

void	lop_stack(t_stack **stack, int n)
{
	t_stack	*del;
	t_stack	*prev;

	del = *stack;
	if (del != NULL && del->num == n)
	{
		*stack = del->next;
		free(del);
		return ;
	}
	while (del != NULL && del->num != n)
	{
		prev = del;
		del = del->next;
	}
	if (del == NULL)
		return ;
	prev->next = del->next;
	free(del);
}
