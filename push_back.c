/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:35:17 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/24 21:37:37 by wluedara         ###   ########.fr       */
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

void	back_home_too(t_stack **a, t_stack **b, int max)
{
	int	posi;

	posi = ha_position(b, max);
	if (posi <= stack_lenght(b) / 2)
		rorotate(a, b, 'b');
	else
		rerotate_ab(a, b, 'b');
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

	if (*b == NULL)
		return ;
	max = find_max(b);
	last = find_last(a);
	if ((*b)->index == max)
	{
		push_stack(a, b, 'a');
		if (!truat_stack(a))
			back_home_too(a, b, max);
	}
	else if ((*b)->index == max - 1)
	{
		push_stack(a, b, 'a');
		if (!truat_stack(a))
			back_home_too(a, b, max);
		// i++;
	}
	// if (last->index == max || last->index == max - 1)
	// 	rerotate_ab(a, b, 'b');
	// else
	// 	rorotate(a, b, 'b');
	back_home_too(a, b, max);
	back_home(a, b);
}

// void	back_home_too(t_stack **a, t_stack **b, int max)
// {
// 	int	posi;

// 	posi = ha_position(b, max);
// 	printf("posi = %d\n", posi);
// 	if (posi <= stack_lenght(b) / 2)
// 		rorotate(a, b, 'b');
// 	if (*b && (*b)->next != NULL && (*b)->index < (*b)->next->index \
// 	&& (*a)->index > (*a)->next->index)
// 		sarab_stack(a, b, 's');
// 	if (*b && (*b)->next != NULL && (*b)->index < (*b)->next->index)
// 		sarab_stack(a, b, 'b');
// 	// if ((*a)->index > (*a)->next->index)
// 		// sarab_stack(a, b, 'a');
// }

// void	back_home(t_stack **a, t_stack **b)
// {
// 	int			max;
// 	t_stack		*last;
// 	// int	posi;

// 	max = find_max(b);
// 	last = find_last(a);
// 	// posi = ha_position(b, max);
// 	if (truat_stack(a))
// 		return ;
// 	if ((*b)->index == max || (*b)->index == max - 1)
// 	{
// 		push_stack(a, b, 'a');
// 		if (!truat_stack(a))
// 			sarab_stack(a, b, 'a');
// 	}
// 	// if ()
// 	back_home_too(a, b, max);
// 	back_home(a, b);
// }
