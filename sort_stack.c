/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:29:01 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/10 17:29:31 by wluedara         ###   ########.fr       */
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

void	sort_sage(t_stack **a, t_stack **b)
{
	int	len;

	len = stack_lenght(a);
	init_index2list(a);
	printf("=== Before ===\n");
	my_print(*a);
	if (len == 2)
		sarab_stack(a, b, 'a');
	else if (len == 3)
		sort_sam(a);
	else if (len == 5)
		sort_ha(a, b);
	else
	{
		if (len <= 100)
		{
			
		}
		// if (len >= 500)
	}
}
