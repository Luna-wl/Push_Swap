/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:07:34 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/07 18:01:08 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sort mai
int	truat_stack(t_stack **stack)
{
	t_stack	*before;
	t_stack	*after;

	if (*stack == NULL || (*stack)->next == NULL)
		return (1);
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
