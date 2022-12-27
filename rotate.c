/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:10:42 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/27 23:39:28 by wluedara         ###   ########.fr       */
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
	add_back(stack, hua);
}

void	rorotate(t_stack **ant, t_stack **bee)
{
	rotate(ant);
	rotate(bee);
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
	add_hua(stack, hang);
}

void	rerotate_AB(t_stack **ant, t_stack **bee)
{
	rerotate(ant);
	rerotate(bee);
}
