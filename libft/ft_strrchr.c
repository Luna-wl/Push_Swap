/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:49:29 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/27 23:09:31 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*s;
	char	ch;

	ch = c;
	s = (char *)str;
	len = ft_strlen(s) - 1;
	if (ch == '\0')
		return (&s[len + 1]);
	while (len >= 0)
	{
		if (s[len] == ch)
			return (&s[len]);
		len--;
	}
	return (0);
}
