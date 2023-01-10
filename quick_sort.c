/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:49:42 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/09 15:37:04 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*list_to_arr(t_stack **stack, int len)
{
	int		*arr;
	int		i;
	t_stack	*tmp;

	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (0);
	i = 0;
	tmp = *stack;
	while (tmp != NULL)
	{
		arr[i++] = tmp->num;
		tmp = tmp->next;
	}
	return (arr);
}

void	swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	find_pi_position(int *arr, int max, int min)
{
	int	pivot;
	int	i;
	int	k;

	pivot = arr[max];
	i = min - 1;
	k = min;
	while (k < max)
	{
		if (arr[k] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[k]);
		}
		k++;
	}
	swap(&arr[i + 1], &arr[max]);
	return (i + 1);
}

void	quick_sort_sage(int *arr, int max, int min)
{
	int	pivot;

	if (min < max)
	{
		pivot = find_pi_position(arr, max, min);
		quick_sort_sage(arr, pivot - 1, min);
		quick_sort_sage(arr, max, pivot + 1);
	}
}

void	init_index2list(t_stack **stack)
{
	int		len;
	int		*arr;
	int		i;
	t_stack	*new;

	len = stack_lenght(stack);
	arr = list_to_arr(stack, len);
	quick_sort_sage(arr, len - 1, 0);
	new = *stack;
	while (new != NULL)
	{
		i = 0;
		while (i < len)
		{
			if (arr[i] == new->num)
				new->index = i + 1;
			i++;
		}
		new = new->next;
	}
	free(arr);
}
