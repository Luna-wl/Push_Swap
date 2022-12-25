/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:54:16 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/25 15:44:07 by wluedara         ###   ########.fr       */
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

int	*convert_at(char *s)
{
	char	**n;
	int		*num;
	int		i;
	int		len;

	if (!s)
		return (0);
	n = ft_split(s, ' ');
	len = find_size(n);
	num = malloc(sizeof(int) * len);
	if (!num)
		return (0);
	i = 0;
	while (i < len)
	{
		num[i] = ft_atoi(n[i]);
		i++;
	}
	free(n);
	return (num);
}
