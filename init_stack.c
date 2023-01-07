/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 23:13:19 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/07 12:44:41 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_size(char **n)
{
	size_t	i;

	i = 0;
	while (n[i] != 0)
		i++;
	return (i);
}

void	add_list(t_stack **a_stack, char *n, char **split)
{
	t_stack	*hua;

	hua = malloc(sizeof(t_stack));
	if (!hua)
		error406(a_stack, 0);
	hua->num = my_atoi(n, a_stack, split, hua);
	hua->next = NULL;
	add_hang(a_stack, hua);
}

void	put_in_stack(char *av, t_stack **a_stack)
{
	char	**agv;
	int		i;
	int		len;

	agv = ft_split(av, ' ');
	len = find_size(agv);
	i = 0;
	while (i < len)
	{
		if (digit_mai(agv[i]) == -1)
		{
			write(2, "Error\n", 6);
			lop_split(agv);
			exit (0);
		}
		add_list(a_stack, agv[i], agv);
		i++;
	}
	lop_split(agv);
}
