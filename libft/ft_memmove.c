/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:03:14 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/27 23:08:30 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	if (!s1 && !s2)
		return (NULL);
	while (s1 < s2 && i < n && n >= 0)
	{
			s1[i] = s2[i];
			i++;
	}
	while (s1 > s2 && n > 0)
	{
			s1[n - 1] = s2[n - 1];
			n--;
	}
	return (str1);
}
