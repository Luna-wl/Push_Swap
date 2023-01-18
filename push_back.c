/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:35:17 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/18 16:23:42 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	back_home_too(t_stack **a, t_stack **b)
{
	if ((*a)->index > (*a)->next->index)
		sarab_stack(a, b, 'a');
	if (*b && (*b)->next != NULL && (*b)->index < (*b)->next->index)
		sarab_stack(a, b, 'b');
}

void	back_home(t_stack **a, t_stack **b)
{
	int			max;
	static int	i = 0;
	t_stack		*last;

	if (*b == NULL)
		return ;
	max = find_max(b);
	last = find_last(a);
	if ((*b)->index == max || (*b)->index == max - 1)
	{
		push_stack(a, b, 'a');
		i++;
	}
	if (last->index == max || last->index == max - 1)
		rerotate_ab(a, b, 'b');
	else
		rorotate(a, b, 'b');
	if (i == 2)
	{
		back_home_too(a, b);
		i = 0;
	}
	back_home_too(a, b);
	back_home(a, b);
}
