/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 23:13:19 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/25 16:38:58 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_len(int *n)
{
	size_t	i;

	i = 0;
	while (n[i] != 0)
		i++;
	return (i);
}

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

void	add_first(t_stack **a_stack, int n)
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

void	put_in_stack(char *av, t_stack *a_stack)
{
	int	*n;
	int	i;
	int	len;

	n = convert_at(av);
	len = find_len(n);
	i = 0;
	while (i < len)
	{
		add_first(&a_stack, n[i]);
		i++;
	}
	my_print(a_stack);
	free(n);
}

void my_print(t_stack *node)
{
	t_stack	*tmp = node;
	int i = 0;
	while (tmp != NULL)
	{
		printf("tmp->num[%d] = %d\n", i, tmp->num);
		tmp = tmp->next;
		i++;
	}
	printf("\n");
}