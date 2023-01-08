/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:55 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/08 16:17:47 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_stack	*a_stack;
	t_stack	*b_stack;

	i = 1;
	a_stack = NULL;
	b_stack = NULL;
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
		sort_sage(&a_stack, &b_stack);
		printf("=== After ===\n");
		printf("a = \n");
		my_print(a_stack);
		// printf("b = \n");
		// my_print(b_stack);
		lop_stack(&a_stack);
	}
	return (0);
}
