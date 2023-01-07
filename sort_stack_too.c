/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_too.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:32:04 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/07 18:00:55 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_sam(t_stack **a, t_stack **b)
{
	if ((*a)->index == 1)
	{
		if ((*a)->next->index == 3)
			sarab_stack(a, b, 'a');
	}
	if ((*a)->index == 3)
	{
		if ((*a)->next->index == 1)
			rorotate(a, b, 'a');
		else
			sarab_stack(a, b, 'a');
	}
	if ((*a)->index == 2)
	{
		if ((*a)->next->index == 1)
			sarab_stack(a, b, 'a');
		else
			rerotate_ab(a, b, 'a');
	}
}

