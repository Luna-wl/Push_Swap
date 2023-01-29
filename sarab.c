/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sarab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:00:19 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/27 14:46:42 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sarab_swap(t_stack **stack)
{
	t_stack	*hua;

	if (*stack == NULL || (*stack)->next == NULL )
		return ;
	hua = *stack;
	*stack = hua->next;
	hua->next = hua->next->next;
	(*stack)->next = hua;
}

void	sarab_stack(t_stack **a, t_stack **b, char mode, int pim)
{
	if (mode == 'a')
	{
		sarab_swap(a);
		if (pim == 1)
			write(1, "sa\n", 3);
	}
	else if (mode == 'b')
	{
		sarab_swap(b);
		if (pim == 1)
			write(1, "sb\n", 3);
	}
	else
	{
		sarab_swap(a);
		sarab_swap(b);
		if (pim == 1)
			write(1, "ss\n", 3);
	}
}
