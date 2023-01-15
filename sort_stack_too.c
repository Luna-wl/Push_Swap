/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_too.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:32:04 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/10 17:41:23 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack **a)
{
	t_stack	*tmp;
	int		max;

	tmp = *a;
	max = tmp->index;
	while (tmp->next != NULL)
	{
		if (max < tmp->next->index)
			max = tmp->next->index;
		tmp = tmp->next;
	}
	return (max);
}

void	sort_sam(t_stack **a)
{
	int	max;

	if (truat_stack(a))
		return ;
	max = find_max(a);
	if ((*a)->index == max)
	{
		if ((*a)->next->next->index > (*a)->next->index)
			rorotate(a, NULL, 'a');
		else
			sarab_stack(a, NULL, 'a');
	}
	if ((*a)->next->index == max)
	{
		if ((*a)->index < (*a)->next->next->index)
			sarab_stack(a, NULL, 'a');
		else
			rerotate_ab(a, NULL, 'a');
	}
	if ((*a)->next->next->index == max && (*a)->index > (*a)->next->index)
		sarab_stack(a, NULL, 'a');
	sort_sam(a);
}

void	sort_ha_two(t_stack **a, t_stack **b)
{
	while (stack_lenght(a) > 3)
	{
		if ((*a)->index <= 2)
			push_stack(a, b, 'b');
		if ((*a)->index > 2)
			rorotate(a, b, 'a');
	}
	if (stack_lenght(a) == 3)
	{
		sort_sam(a);
		if ((*b)->index < (*b)->next->index)
			sarab_stack(a, b, 'b');
		push_stack(a, b, 'a');
		push_stack(a, b, 'a');
	}
}

void	sort_ha(t_stack **a, t_stack **b)
{
	if (truat_stack(a) && b == NULL)
		return ;
	if ((*a)->index != 1 && (*a)->next->next->index == 3 && \
		(*a)->next->next->next->index == 4 && \
		(*a)->next->next->next->next->index == 5)
	{
		sarab_stack(a, b, 'a');
		return ;
	}
	while ((*a)->next->next->next->next->index <= 2)
		rerotate_ab(a, b, 'a');
	while ((*a)->index >= 3)
		rorotate(a, b, 'a');
	if (truat_stack(a))
		return ;
	sort_ha_two(a, b);
	sort_ha(a, b);
}
