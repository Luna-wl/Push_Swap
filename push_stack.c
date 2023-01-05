/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:45:53 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/05 15:07:53 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack1to2(t_stack **ichi, t_stack **ni)
{
	t_stack	*tmp;

	if (*ichi == NULL || *ni == NULL)
		return ;
	tmp = *ichi;
	add_hua(ni, tmp);
	lop_stack(ichi, tmp->num);
}

void	push_urhandup(t_stack **ichi, t_stack **ni, char mode)
{
	if (mode == 'a')
	{
		push_stack1to2(ni, ichi);
		write(1, "pa\n", 3);
	}
	else
	{
		push_stack1to2(ichi, ni);
		write(1, "pb\n", 3);
	}
}
