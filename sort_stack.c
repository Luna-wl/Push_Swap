/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:29:01 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/26 23:40:55 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ha_position_a2b(t_stack **stack, int chuck)
{
	t_stack	*tmp;
	int		posi;

	posi = 0;
	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->index <= chuck)
			break ;
		posi++;
		tmp = tmp->next;
	}
	return (posi);
}

t_stack	*ha_po(t_stack **a, int len)
{
	t_stack	*tmp;

	tmp = *a;
	while (--len != 0)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}

int	ha_tai(t_stack **a, int chuck)
{
	t_stack	*po;
	int		len;

	len = stack_lenght(a);
	while (len != 0)
	{
		po = ha_po(a, len);
		if (po->index <= chuck)
		{
			len = stack_lenght(a) - len;
			return (len);
		}
		--len;
	}
	return (0);
}

// void	sort_yai_too(t_stack **a, t_stack **b, int chuck)
// {
// 	if (ha_position_a2b(a, chuck) > ha_tai(a, chuck))
// 		rerotate_ab(a, b, 'a', 1);
// 	else if (ha_position_a2b(a, chuck) < ha_tai(a, chuck))
// 		rorotate(a, b, 'a', 1);
// 	else
// 		rorotate(a, b, 'a', 1);
// }

// void	sort_yai(t_stack **a, t_stack **b, int chuck, int chuck2)
// {
// 	static int	i = 0;
// 	t_stack		*last;
// 	int			max;

// 	max = find_max(a) - 2;
// 	last = find_last(a);
// 	if (stack_lenght(a) == 3)
// 		return ;
// 	// sleep(1);
// 	// my_print(*a);
// 	// // printf("a = %d\n", (*a)->index);
// 	// printf("chuck = %d\n", chuck);
// 	if (last->index <= chuck && last->index < max)
// 		rerotate_ab(a, b, 'a', 1);
// 	if ((*a)->index <= chuck && (*a)->index < max)
// 	{
// 		push_stack(a, b, 'b', 1);
// 		i++;
// 	}
// 	else
// 		rorotate(a, b, 'a', 1);
// 	if (i == chuck)
// 		chuck += chuck2;
// 	sort_yai(a, b, chuck, chuck2);
// }

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
