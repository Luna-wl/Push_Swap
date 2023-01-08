/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:29:01 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/08 16:09:12 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_ha(t_stack **a, t_stack **b)
{
	push_stack(a, b, 'b');
	push_stack(a, b, 'b');
	if (!truat_stack(a))
		sort_sam(a, b);
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
		sort_sam(a, NULL);
	else if (len == 5)
		sort_ha(a, b);
	// if (truat_stack(a))
	// 	return ;
}
