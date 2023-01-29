/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:29:01 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/28 00:09:57 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_yai(t_stack **a, t_stack **b, int chuck, int chuck2)
{
	static int	i = 0;
	t_stack		*last;
	int			max;

	max = find_max(a) - 2;
	last = find_last(a);
	if (stack_lenght(a) == 3)
		return ;
	if (last->index <= chuck && last->index < max)
		rerotate_ab(a, b, 'a', 1);
	if ((*a)->index <= chuck && (*a)->index < max)
	{
		push_stack(a, b, 'b', 1);
		i++;
	}
	else
		rorotate(a, b, 'a', 1);
	if (i == chuck)
		chuck += chuck2;
	sort_yai(a, b, chuck, chuck2);
}

void	sort_sage(t_stack **a, t_stack **b)
{
	int	len;
	int	chuck;

	len = stack_lenght(a);
	init_index2list(a);
	if (len == 2)
		sarab_stack(a, b, 'a', 1);
	else if (len == 3)
		sort_sam(a);
	else if (len == 5)
		sort_ha(a, b);
	else
	{
		if (len >= 500)
			chuck = len / 11;
		else
			chuck = len / 5;
		sort_yai(a, b, chuck, chuck);
		if (!truat_stack(a))
			sort_sam(a);
		back_home(a, b);
		if ((*a)->index > (*a)->next->index)
			sarab_stack(a, b, 'a', 1);
	}
}
