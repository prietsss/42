/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepriet <alepriet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 18:32:45 by alepriet          #+#    #+#             */
/*   Updated: 2026/06/27 20:42:15 by alepriet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	**ft_split(char const *s, char c)
{
    char	**res;
	size_t	i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (s[i] != '\0')
	{
		if (s[i] != c && start < 0)
			start = i;
		else if (s[i] == c && start >= 0)
		{
			res[j] = fill_word(s, start, i);
			if (!res[j])
				return (free_array(res, j));
			start = -1;
			j++;
		}
		i++;
	}
	if (start >= 0)
	{
		res[j] = fill_word(s, start, i);
		if (!res[j])
			return (free_array(res, j));
		j++;
	}
	res[j] = NULL;
	return (res);
}

static int      count_words(char const *s, char c)
{
    int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	    *free_array(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char     *fill_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}