/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:35:17 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/26 23:46:26 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ha_position(t_stack **stack, int max)
{
	t_stack	*tmp;
	int		posi;

	posi = 0;
	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->index == max)
			break ;
		posi++;
		tmp = tmp->next;
	}
	return (posi);
}

void	back_home_too(t_stack **a, t_stack **b)
{
	if (*b && (*b)->next != NULL && (*b)->index < (*b)->next->index \
	&& (*a)->index > (*a)->next->index)
		sarab_stack(a, b, 's', 1);
	if ((*a)->index > (*a)->next->index)
		sarab_stack(a, b, 'a', 1);
	if (*b && (*b)->next != NULL && (*b)->index < (*b)->next->index)
		sarab_stack(a, b, 'b', 1);
}

void	back_home_sam(t_stack **a, t_stack **b, int max)
{
	t_stack		*last;
	
	last = find_last(a);
	if (last->index == max || last->index == max - 1)
		rerotate_ab(a, b, 'b', 1);
	if (ha_position(b, max) <= stack_lenght(b) / 2)
		rorotate(a, b, 'b', 1);
	else
		rerotate_ab(a, b, 'b', 1);
}

void	back_home(t_stack **a, t_stack **b)
{
	int	max;

	if (*b == NULL)
		return ;
	max = find_max(b);
	if ((*b)->index == max || (*b)->index == max - 1)
	{
		push_stack(a, b, 'a', 1);
		if (!truat_stack(a))
			back_home_too(a, b);
	}
	else
	{
		if (ha_position(b, max) <= stack_lenght(b) / 2)
			rorotate(a, b, 'b', 1);
		else
			rerotate_ab(a, b, 'b', 1);
	}
	back_home(a, b);
}
