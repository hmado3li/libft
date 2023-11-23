/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:33:30 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/15 12:06:10 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

static char	**freeword(char **str, size_t idx)
{
	while (idx > 0)
	{
		free(str[idx - 1]);
		idx--;
	}
	free(str);
	return (NULL);
}

static char	**mysplit(char **wd, char const *st, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (st[j] && i < wordcount(st, c))
	{
		while (st[j] == c)
			j++;
		len = 0;
		while (st[j + len] != '\0' && st[j + len] != c)
			len++;
		wd[i] = ft_substr(st, j, len);
		if (!wd[i])
			return (freeword(wd, i));
		j = j + len;
		i++;
	}
	wd[i] = NULL;
	return (wd);
}

char	**ft_split(char const *s, char c)
{
	char	**word;

	if (!s)
		return (NULL);
	word = (char **)malloc (sizeof(char *) * (wordcount(s, c) + 1));
	if (!word)
		return (NULL);
	return (mysplit(word, s, c));
}
// int main()
// {
//     int i = 0;
//     char **s = ft_split("                  ",' ');
//     while (s[i] != NULL)
//     {
//         printf ("%s       ", s[i]);
//         i++;
//     }
//     freeword(s, i);
//     //printf("%zu",Wordcount("salahx1337x42x", 'x'));
// }
