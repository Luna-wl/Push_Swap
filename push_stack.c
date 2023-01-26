/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:45:53 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/26 12:06:21 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack1to2(t_stack **ichi, t_stack **ni)
{
	t_stack	*tmp;
	t_stack	*hua;

	tmp = *ichi;
	hua = *ichi;
	*ichi = tmp->next;
	hua->next = NULL;
	add_hua(ni, hua);
}

void	push_stack(t_stack **ichi, t_stack **ni, char mode, int pim)
{
	if (mode == 'a')
	{
		if (*ni == NULL)
			return ;
		push_stack1to2(ni, ichi);
		if (pim == 1)
			write(1, "pa\n", 3);
	}
	else
	{
		if (*ichi == NULL)
			return ;
		push_stack1to2(ichi, ni);
		if (pim == 1)
			write(1, "pb\n", 3);
	}
}
