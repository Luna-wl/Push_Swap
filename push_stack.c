/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:45:53 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/06 16:29:26 by wluedara         ###   ########.fr       */
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

void	push_stack(t_stack **ichi, t_stack **ni, char mode)
{
	if (mode == 'a')
	{
		if (*ni == NULL)
			return ;
		push_stack1to2(ni, ichi);
		write(1, "pa\n", 3);
	}
	else
	{
		if (*ichi == NULL)
			return ;
		push_stack1to2(ichi, ni);
		write(1, "pb\n", 3);
	}
}
