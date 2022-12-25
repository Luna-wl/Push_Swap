/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:48:39 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/27 23:08:24 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*new1;
	char	*new2;

	i = 0;
	new1 = (char *)dest;
	new2 = (char *)src;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		*new1 = *new2;
		i++;
		new1++;
		new2++;
	}
	return (dest);
}
