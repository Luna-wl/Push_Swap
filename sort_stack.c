/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:29:01 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/06 18:07:05 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_last(t_stack **stack)
{
	t_stack	*last;

	last = *stack;
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}

void	sort_sam(t_stack **a, t_stack **b)
{
	t_stack	*last;
	int		middle;

	last = find_last(a);
	middle = (*a)->next->num;
	if ((*a)->num > middle && (*a)->num < last->num)
		sarab_stack(a, b, 'a');
	else if ((*a)->num > last->num && middle < last->num)
		rorotate(a, b, 'a');
	else if ((*a)->num < middle && last->num < (*a)->num)
		rerotate_ab(a, b, 'a');
	else if ((*a)->num > middle && middle > last->num)
	{
		sarab_stack(a, b, 'a');
		rerotate_ab(a, b, 'a');
	}
	else if ((*a)->num < middle && middle > last->num)
	{
		sarab_stack(a, b, 'a');
		rorotate(a, b, 'a');
	}
}

void	sort_ha(t_stack **a, t_stack **b)
{
	
}

void	sort_sage(t_stack **a, t_stack **b)
{
	int	len;

	len = stack_lenght(a);
	if (len == 2)
		sarab_stack(a, b, 'a');
	else if (len == 3)
		sort_sam(a, NULL);
	else if (len == 5)
		sort_ha(a, b);
}
