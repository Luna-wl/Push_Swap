/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:07:34 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/25 17:10:50 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sort mai
int	truat_stack(t_stack **stack)
{
	t_stack	*before;
	t_stack	*after;

	before = *stack;
	after = (*stack)->next;
	while (after != NULL)
	{
		if (after->num < before->num)
			return (0);
		before = after;
		after = after->next;
	}
	return (1);
}

//check dup
int	dup_mai(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*new;

	if (*stack == NULL || (*stack)->next == NULL)
		error406(stack, 1);
	new = *stack;
	while (new->next != NULL)
	{
		tmp = new->next;
		while (tmp != NULL)
		{
			if (new->num == tmp->num)
				return (0);
			tmp = tmp->next;
		}
		new = new->next;
	}
	return (1);
}
