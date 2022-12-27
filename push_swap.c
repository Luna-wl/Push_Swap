/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:55 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/27 23:35:22 by wluedara         ###   ########.fr       */
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
			// put_in_stack(av[i], &b_stack);
			i++;
		}
		printf("a-stack = ");
		my_print(a_stack);
		// printf("b-stack = ");
		// my_print(b_stack);
		// rerotate_AB(&a_stack, &b_stack);
		rotate(&a_stack);
		printf("a = ");
		my_print(a_stack);
		// printf("b = ");
		// my_print(a_stack);
	}
}
