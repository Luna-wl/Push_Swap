/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:20:53 by wluedara          #+#    #+#             */
/*   Updated: 2022/09/27 23:08:58 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	char			*s;
	unsigned char	ch;

	i = 0;
	ch = c;
	s = (char *)str;
	while (s[i] != '\0' && s[i] != ch)
		i++;
	if (s[i] == ch)
		return (&s[i]);
	return (0);
}
