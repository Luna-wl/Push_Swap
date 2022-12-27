/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_404.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:50:08 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/27 21:44:57 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digit_mai(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = find_size(&s);
	while (i < len)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (-1);
		i++;
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

void	error404(char **s)
{
	write(1, "Error\n", 6);
	ploi_split(s);
	exit (0);
}
