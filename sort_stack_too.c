/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_too.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:32:04 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/26 12:04:38 by wluedara         ###   ########.fr       */
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
			rorotate(a, NULL, 'a', 1);
		else
			sarab_stack(a, NULL, 'a', 1);
	}
	if ((*a)->next->index == max)
	{
		if ((*a)->index < (*a)->next->next->index)
			sarab_stack(a, NULL, 'a', 1);
		else
			rerotate_ab(a, NULL, 'a', 1);
	}
	if ((*a)->next->next->index == max && (*a)->index > (*a)->next->index)
		sarab_stack(a, NULL, 'a', 1);
	sort_sam(a);
}

void	sort_ha_two(t_stack **a, t_stack **b)
{
	while (stack_lenght(a) > 3)
	{
		if ((*a)->index <= 2)
			push_stack(a, b, 'b', 1);
		if ((*a)->index > 2)
			rorotate(a, b, 'a', 1);
	}
	if (stack_lenght(a) == 3)
	{
		sort_sam(a);
		if ((*b)->index < (*b)->next->index)
			sarab_stack(a, b, 'b', 1);
		push_stack(a, b, 'a', 1);
		push_stack(a, b, 'a', 1);
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
		sarab_stack(a, b, 'a', 1);
		return ;
	}
	while ((*a)->next->next->next->next->index <= 2)
		rerotate_ab(a, b, 'a', 1);
	while ((*a)->index >= 3)
		rorotate(a, b, 'a', 1);
	if (truat_stack(a))
		return ;
	sort_ha_two(a, b);
	sort_ha(a, b);
}
