/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:13:04 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/26 17:30:43 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rab_input_too(t_stack **a, t_stack **b, char *instr)
{
	truat_instr(a, b, instr);
	if (truat_stack(a) && *b == NULL)
	{
		lop_stack(a);
		free(instr);
		write(1, "OK\n", 3);
		exit(0);
	}
	// else
	// {
	// 	write(1, "KO\n", 3);
	// 	exit(0);
	// }
}

void	rab_input(t_stack **a, t_stack **b)
{
	char	*instr;

	while (1)
	{
		instr = get_next_line(0);
		if (!instr)
		{
			if (truat_stack(a) && *b == NULL)
				write(1, "OK\n", 3);
			else
				write(1, "KO\n", 3);
			lop_stack(a);
			exit (0);
		}
		else
			rab_input_too(a, b, instr);
	}
}

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
		rab_input(&a_stack, &b_stack);
	}
	return (0);
}