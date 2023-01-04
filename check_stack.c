/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:07:34 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/04 15:34:15 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//check dup
void	truat_stack(t_stack *stack)
{
	t_stack	*tmp;

	while (stack->next != NULL)
	{
		tmp = stack->next;
		while (tmp != NULL)
		{
			if (stack->num == tmp->num)
			{
				write(2, "Error\n", 6);
				ploi_stack(&stack);
				exit (0);
			}
			tmp = tmp->next;
		}
		stack = stack->next;
	}
}