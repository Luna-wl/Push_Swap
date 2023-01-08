/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_406.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:50:08 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/08 16:44:48 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digit_mai(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else if (s[i] == '-')
			i++;
		else
			return (-1);
	}
	return (i);
}

void	lop_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	lop_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*del;

	del = *stack;
	while (del != NULL)
	{
		tmp = del->next;
		free(del);
		del = tmp;
	}
}

void	error406(t_stack **stack, int mode)
{
	if (mode == 0)
	{
		write(2, "Error\n", 6);
		lop_stack(stack);
		exit (0);
	}
	if (mode == 1)
	{
		lop_stack(stack);
		exit (0);
	}
}
