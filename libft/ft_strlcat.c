/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:35:53 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/27 22:26:16 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	if (!dst && size == 0)
		return (0);
	len_d = ft_strlen(dst);
	len_s = ft_strlen((char *)src);
	if (len_d >= size)
		return (len_s + size);
	if (size > len_d + len_s)
		size = len_d + len_s + 1;
	i = 0;
	while (len_d + i < size - 1)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_s + len_d);
}
