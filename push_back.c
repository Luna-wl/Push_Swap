/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:35:17 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/24 23:19:53 by wluedara         ###   ########.fr       */
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
		sarab_stack(a, b, 's');
	if ((*a)->index > (*a)->next->index)
		sarab_stack(a, b, 'a');
	if (*b && (*b)->next != NULL && (*b)->index < (*b)->next->index)
		sarab_stack(a, b, 'b');
}

void	back_home(t_stack **a, t_stack **b)
{
	int			max;
	t_stack		*last;
	int			posi;

	if (*b == NULL)
		return ;
	max = find_max(b);
	last = find_last(a);
	posi = ha_position(b, max);
	if ((*b)->index == max || (*b)->index == max - 1)
	{
		push_stack(a, b, 'a');
		if (!truat_stack(a))
			back_home_too(a, b);
	}
	if (last->index == max || last->index == max - 1)
		rerotate_ab(a, b, 'b');
	if (posi <= stack_lenght(b) / 2)
		rorotate(a, b, 'b');
	else
		rerotate_ab(a, b, 'b');
	back_home_too(a, b);
	back_home(a, b);
}
