/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:10:08 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/24 23:21:29 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_hua(t_stack **stack, t_stack *hua)
{
	t_stack	*tmp;

	if (!hua)
		return ;
	tmp = hua;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack;
	*stack = hua;
}

void	add_hang(t_stack **stack, t_stack *hang)
{
	t_stack	*last;

	if (*stack == NULL)
	{
		*stack = hang;
		return ;
	}
	last = find_last(stack);
	last->next = hang;
}

int	stack_lenght(t_stack **stack)
{
	int		len;
	t_stack	*tmp;

	len = 0;
	tmp = *stack;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

void	my_print(t_stack *node)
{
	t_stack	*tmp;

	tmp = node;
	while (tmp != NULL)
	{
		printf("tmp->num = |%d|>>>>\ttmp->index = |%d|\n", tmp->num, tmp->index);
		tmp = tmp->next;
	}
	printf("\n");
}

t_stack	*find_last(t_stack **stack)
{
	t_stack	*last;

	last = *stack;
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}
