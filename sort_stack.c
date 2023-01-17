/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:29:01 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/17 17:39:28 by wluedara         ###   ########.fr       */
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

void	sort_yai(t_stack **a, t_stack **b, int chuck, int chuck2)
{
	static int	i = 0;
	t_stack		*last;
	int			med;
	int			len;

	len = stack_lenght(a);
	last = find_last(a);
	med = ha_median(len);
	if (stack_lenght(a) == 3)
		return ;
	if (last->index <= chuck && last->index < med)
		rerotate_ab(a, b, 'a');
	if ((*a)->index <= chuck)
	{
		push_stack(a, b, 'b');
		i++;
	}
	else
		rorotate(a, b, 'a');
	if (i == chuck)
	{
		chuck += chuck2;
	}
	sort_yai(a, b, chuck, chuck2);
}

void	sort_sage(t_stack **a, t_stack **b)
{
	int	len;
	int	chuck;

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
		// printf("chuck = %d\n", chuck);
		sort_yai(a, b, chuck, chuck);
		if (truat_stack(a))
			sort_sam(a);
		back_home(a, b);
	}
}
