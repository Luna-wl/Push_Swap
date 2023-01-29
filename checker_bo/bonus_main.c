/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:13:04 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/28 00:13:36 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error418(t_stack **a, t_stack **b, char *sth)
{
	free(sth);
	lop_stack(a);
	lop_stack(b);
	write(2, "ERROR\n", 6);
	exit(255);
}

void	rab_input(t_stack **a, t_stack **b)
{
	char	*instr;

	while (1)
	{
		instr = get_next_line(0);
		if (instr == NULL)
		{
			if (truat_stack(a) && *b == NULL)
				write(1, "OK\n", 3);
			else
				write(1, "KO\n", 3);
			lop_stack(a);
			exit(0);
		}
		truat_instr(a, b, instr);
		free(instr);
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
		rab_input(&a_stack, &b_stack);
		lop_stack(&a_stack);
	}
	return (0);
}
