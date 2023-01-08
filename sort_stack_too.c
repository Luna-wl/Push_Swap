/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_too.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:32:04 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/08 15:53:44 by wluedara         ###   ########.fr       */
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

void	sort_sam(t_stack **a, t_stack **b)
{
	int		max;
	t_stack	*last;

	max = find_max(a);
	last = find_last(a);
	printf("a = \n");
	my_print(*a);
	if ((*a)->index == max)
	{
		if (last->index > (*a)->next->index)
			rorotate(a, b, 'a');
		else
			sarab_stack(a, b, 'a');
	}
	if ((*a)->next->index == max)
	{
		if ((*a)->index < last->index)
			sarab_stack(a, b, 'a');
		else
			rerotate_ab(a, b, 'a');
	}
	if (last->index == max && (*a)->index > (*a)->next->index)
		sarab_stack(a, b, 'a');
	if (!truat_stack(a))
		sort_sam(a, b);
}
