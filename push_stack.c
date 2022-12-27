/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:45:53 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/27 22:56:53 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_hua(t_stack **stack, int n)
{
	t_stack	*hua;

	hua = malloc(sizeof(t_stack));
	hua->num = n;
	hua->next = *stack;
	*stack = hua;
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

void	push_stack1to2(t_stack **ichi, t_stack **ni)
{
	t_stack	*tmp;

	if (*ichi == NULL || *ni == NULL)
		return ;
	tmp = *ichi;
	add_hua(ni, tmp->num);
	lop_stack(ichi, tmp->num);
}
