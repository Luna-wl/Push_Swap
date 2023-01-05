/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sarab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:00:19 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/27 14:46:42 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sarab_swap(t_stack **stack)
{
	int	tmp;

	if ((*stack)->next == NULL)
		return ;
	tmp = (*stack)->num;
	(*stack)->num = (*stack)->next->num;
	(*stack)->next->num = tmp;
}

void	sarab_stack(t_stack **a, t_stack **b, char mode)
{
	if (mode == 'a')
	{
		sarab_swap(a);
		write(1, "sa\n", 3);
	}
	else if (mode == 'b')
	{
		sarab_swap(b);
		write(1, "sb\n", 3);
	}
	else
	{
		sarab_swap(a);
		sarab_swap(b);
		write(1, "ss\n", 3);
	}
}
