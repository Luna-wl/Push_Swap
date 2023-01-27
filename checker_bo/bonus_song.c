/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_song.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:37:08 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/27 01:40:20 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strncmp(char *instr, char *sth, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((instr[i] != '\0' || sth[i] != '\0') && i < n)
	{
		if (instr[i] != sth[i])
			return (instr[i] - sth[i]);
		i++;
	}
	return (0);
}

int	truat_instr_too(t_stack **a, t_stack **b, char *instr)
{
	if (!ft_strncmp(instr, "ra\n", 3))
		rorotate(a, b, 'a', 0);
	else if (!ft_strncmp(instr, "rb\n", 3))
		rorotate(a, b, 'b', 0);
	else if (!ft_strncmp(instr, "rr\n", 3))
		rorotate(a, b, 'r', 0);
	else if (!ft_strncmp(instr, "rra\n", 4))
		rerotate_ab(a, b, 'a', 0);
	else if (!ft_strncmp(instr, "rrb\n", 4))
		rerotate_ab(a, b, 'b', 0);
	else if (!ft_strncmp(instr, "rrr\n", 4))
		rerotate_ab(a, b, 'r', 0);
	else
		return (0);
	return (1);
}

int	truat_instr(t_stack **a, t_stack **b, char *instr)
{
	if (!ft_strncmp(instr, "sa\n", 3))
		sarab_stack(a, b, 'a', 0);
	else if (!ft_strncmp(instr, "sb\n", 3))
		sarab_stack(a, b, 'b', 0);
	else if (!ft_strncmp(instr, "ss\n", 3))
		sarab_stack(a, b, 's', 0);
	else if (!ft_strncmp(instr, "pa\n", 3))
		push_stack(a, b, 'a', 0);
	else if (!ft_strncmp(instr, "pb\n", 3))
		push_stack(a, b, 'b', 0);
	else
		truat_instr_too(a, b, instr);
	return (1);
}
