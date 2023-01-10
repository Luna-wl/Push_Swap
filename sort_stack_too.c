/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_too.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:32:04 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/10 17:30:42 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_yai(t_stack **a, t_stack **b)
{
	
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
