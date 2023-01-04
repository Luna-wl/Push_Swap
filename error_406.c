/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_406.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:50:08 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/04 15:15:16 by wluedara         ###   ########.fr       */
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

void	ploi_split(char **str)
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

void	ploi_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack != NULL)
	{
		tmp = (*stack)->next;
		free (tmp);
		*stack = tmp;
	}
	*stack = NULL;
}

void	error406(t_stack **stack)
{
	write(2, "Error\n", 6);
	ploi_stack(stack);
	exit (0);
}
