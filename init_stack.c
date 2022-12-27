/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 23:13:19 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/27 22:46:50 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_back(t_stack **a_stack, int n)
{
	t_stack	*tmp;
	t_stack	*last;

	last = *a_stack;
	tmp = malloc(sizeof(t_stack));
	tmp->num = n;
	tmp->next = NULL;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = tmp;
}

void	add_list(t_stack **a_stack, int n)
{
	t_stack	*head;

	if (*a_stack == NULL)
	{
		head = malloc(sizeof(t_stack));
		head->num = n;
		head->next = NULL;
		*a_stack = head;
	}
	else
		add_back(a_stack, n);
}

size_t	find_size(char **n)
{
	size_t	i;

	i = 0;
	while (n[i] != 0)
		i++;
	return (i);
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
		if (digit_mai(agv[i]) >= 0)
			error404(&agv[i]);
		else
			add_list(a_stack, ft_atoi(agv[i]));
		i++;
	}
	ploi_split(agv);
}

void	my_print(t_stack *node)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = node;
	while (tmp != NULL)
	{
		printf("tmp->num[%d] = %d\n", i, tmp->num);
		tmp = tmp->next;
		i++;
	}
	printf("\n");
}
