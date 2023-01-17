/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:29:01 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/17 01:48:13 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ha_median(int num)
{
	int		median;
	int		index;

	median = 0;
	index = 0;
	if (num % 2 == 0)
	{
		index = (((num - 1) / 2) + (num / 2)) / 2;
		median = index;
	}
	else
	{
		index = num / 2;
		median = index;
	}
	return (median);
}

void	ha_median_too(t_stack **stack, int index)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp != NULL)
	{
		// if (tmp->index <= index)
		// 	rerotate_ab(&tmp, NULL, 'a');
		if (tmp->index >= index)
			rorotate(&tmp, NULL, 'a');
		tmp = (*stack)->next;
	}
	// *stack = tmp;
}

void	sort_yai(t_stack **a, t_stack **b, int chuck, int chuck2)
{
	//push to b till a lenght == 3
	//find median
	//loop find index if index > med roro 
	// index < med rero
	//if index <= chuck push to b
	// int	med;
	// (void)b;
	// (void)chuck;
	int	len;

	len = 0;
	printf("len = %d", len);
	printf("len = %d", chuck);
	if (stack_lenght(a) == 3)
		return ;
	if ((*a)->index <= chuck)
	{
		push_stack(a, b, 'b');
		len++;
	}
	else
		rorotate(a, b, 'a');
	if (len == chuck)
	{
		len = chuck;
		chuck += chuck2;
	}
	sort_yai(a, b, chuck, chuck2);
}

void	sort_sage(t_stack **a, t_stack **b)
{
	int	len;
	int	chuck;
	// int	i;

	len = stack_lenght(a);
	init_index2list(a);
	// printf("=== Before ===\n a = \n");
	// my_print(*a);
	// printf("b = \a");
	// my_print(*b);
	if (len == 2)
		sarab_stack(a, b, 'a');
	else if (len == 3)
		sort_sam(a);
	else if (len == 5)
		sort_ha(a, b);
	else
	{
		if (len >= 500)
			chuck = len / 10;
		else
			chuck = len / 4;
		sort_yai(a, b, chuck, chuck);
		// sort_yai_too(a, b, len);
	}
}
