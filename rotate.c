/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:10:42 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/05 14:35:02 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*hang;
	int		hua;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	hang = *stack;
	hua = hang->num;
	lop_stack(stack, hua);
	add_hang(stack, hang);
}

void	rorotate(t_stack **ant, t_stack **bee, char mode)
{
	if (mode == 'a')
	{
		rotate(ant);
		write(1, "ra\n", 3);
	}
	else if (mode == 'b')
	{
		rotate(bee);
		write(1, "rb\n", 3);
	}
	else
	{
		rotate(ant);
		rotate(bee);
		write(1, "rr\n", 3);
	}
}

void	rerotate(t_stack **stack)
{
	t_stack	*hua;
	int		hang;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	hua = *stack;
	while (hua->next != NULL)
	{
		hua = hua->next;
	}
	hang = hua->num;
	lop_stack(stack, hang);
	add_hua(stack, hua);
}

void	rerotate_ab(t_stack **ant, t_stack **bee, char mode)
{
	if (mode == 'a')
	{
		rerotate(ant);
		write(1, "rra\n", 4);
	}
	else if (mode == 'b')
	{
		rerotate(bee);
		write(1, "rrb\n", 4);
	}
	else
	{
		rerotate(ant);
		rerotate(bee);
		write(1, "rrr\n", 4);
	}
}
