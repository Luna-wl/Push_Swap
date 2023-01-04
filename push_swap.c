/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:55 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/04 15:35:29 by wluedara         ###   ########.fr       */
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
		my_print(a_stack);
		truat_stack(a_stack);
	}
}
