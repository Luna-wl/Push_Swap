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

void	sarab_swap(t_stack *stack)
{
	int	tmp;

	if (stack->next == NULL)
		return ;
	tmp = stack->num;
	stack->num = stack->next->num;
	stack->next->num = tmp;
}

void	sarab_a_and_b(t_stack *a, t_stack *b)
{
	int	tmp;
	int	tmp2;

	if (a->next == NULL || b->next == NULL)
		return ;
	tmp = a->num;
	a->num = a->next->num;
	a->next->num = tmp;
	tmp2 = b->num;
	b->num = b->next->num;
	b->next->num = tmp2;
}
