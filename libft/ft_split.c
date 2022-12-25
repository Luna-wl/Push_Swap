/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:27:33 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/23 11:36:27 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_word(char const *s, char c)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static int	count_letter(char const *s, char c)
{
	char	*s1;
	int		i;

	s1 = (char *)s;
	i = 0;
	while (s1[i] != '\0' && s1[i] != c)
	{
		if (s1[i] != c)
			i++;
	}
	return (i);
}

static char	*split(char const *s, char c)
{
	char	*str;
	int		letter;
	int		i;
	int		j;

	letter = count_letter(s, c);
	str = (char *)malloc(sizeof(char) * (letter + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[j] != 0 && s[j] != c)
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		word;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	word = check_word(s, c);
	new = (char **)malloc(sizeof(char *) * (word + 1));
	if (!new)
		return (0);
	j = 0;
	while (i < word)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		new[i++] = split(&s[j], c);
		j += count_letter(&s[j], c);
	}
	new[i] = 0;
	return (new);
}

// int main()
// {
// 	char **tab = ft_split("  fah warin  ", ' ');
// 	int i = 0;

// 	while (i < 5)
// 	{
// 		printf("line %i = %s\n", i, tab[i]);
// 		i++;
// 	}
// }