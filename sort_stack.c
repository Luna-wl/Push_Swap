/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:29:01 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/15 23:31:11 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort_yai_too(t_stack **a, t_stack **b)
// {

// }

void	sort_yai(t_stack **a, t_stack **b, int chuck, int chuck_ori, int len)
{
	//push to b till a lenght == 3 & loop %chuck times
	while (len-- >= 0)
	{
		if ((*a)->index <= chuck)
			push_stack(a, b, 'b');
		else
			rorotate(a, b, 'a');
		if (stack_lenght(a) == 3)
			return ;
	}
	chuck += chuck_ori;
	len = stack_lenght(a);
	sort_yai(a, b, chuck, chuck_ori, len);
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
		sort_yai(a, b, chuck, chuck, len);
	}
}
