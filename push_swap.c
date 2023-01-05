/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:55 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/05 15:03:46 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_stack	*a_stack;
	// t_stack	*b_stack;

	i = 1;
	a_stack = NULL;
	// b_stack = NULL;
	if (ac >= 2)
	{
		while (i < ac)
		{
			put_in_stack(av[i], &a_stack);
			i++;
		}
		if (dup_mai(&a_stack) == 0)
			error406(&a_stack, 0);
		if (truat_stack(&a_stack) == 1)
			error406(&a_stack, 1);
		my_print(a_stack);
	}
}
