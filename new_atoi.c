/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:04:23 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/09 17:18:41 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_space(char str)
{
	if (str == ' ' || str == '\f' || str == '\n' || str == '\r'
		|| str == '\t' || str == '\v' || str == '\t')
		return (1);
	return (0);
}

long	my_atoi(char *str, t_stack **a, char **split, t_stack *list)
{
	long	num;
	long	minus;

	num = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
		if (!(*str >= '0' && *str <= '9'))
			lop_all(a, split, list);
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	num *= minus;
	if (*str != '\0' || num > 2147483647 || num < -2147483648)
		lop_all(a, split, list);
	return (num);
}

void	lop_all(t_stack **a, char **split, t_stack *list)
{
	write(2, "Error\n", 6);
	lop_split(split);
	lop_stack(a);
	free(list);
	exit (0);
}
