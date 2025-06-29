/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscarcin <pscarcin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:22:51 by pscarcin          #+#    #+#             */
/*   Updated: 2025/01/14 18:24:08 by pscarcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char d)
{
	int	count;
	int	inside_word;

	count = 0;
	inside_word = 0;
	while (*s)
	{
		if (*s == d)
			inside_word = 0;
		else if (!inside_word)
		{
			inside_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	ft_fill_words(const char *s, char d, char **mat)
{
	int			len;
	int			i;
	const char	*start;

	i = 0;
	while (*s)
	{
		while (*s == d && *s != '\0')
			s++;
		if (*s == '\0')
			break ;
		start = s;
		while (*s != d && *s != '\0')
			s++;
		len = s - start;
		mat[i] = (char *)malloc((len + 1) * sizeof(char));
		if (mat[i] == NULL)
		{
			while (i > 0)
				free(mat[--i]);
			return ;
		}
		ft_strlcpy(mat[i], start, len + 1);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		count;

	if (s == NULL)
		return (NULL);
	count = ft_word_count(s, c);
	mat = (char **)malloc((count + 1) * sizeof(char *));
	if (mat == NULL)
		return (NULL);
	mat[count] = NULL;
	ft_fill_words(s, c, mat);
	return (mat);
}
