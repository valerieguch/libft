/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteel   <gsteel@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2000/01/01 20:20:20 by gsteel            #+#    #+#             */
/*   Updated: 2000/01/01 20:20:20 by gsteel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h> // TODO remove this

static size_t	ft_count(char const *s, char c)
{
	size_t	words;
	char	light;

	if (c == '\0')
		return (*s != '\0');
	words = 0;
	light = 0;
	while (*s)
	{
		if (!light && *s != c)
		{
			words++;
			light = 1;
		}
		else if (light && *s == c)
			light = 0;
		s++;
	}
	return (words);
}

static void	ft_put_word(char **p, char **s, char c)
{
	char	*start;
	size_t	len;

	while (**s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	*p = malloc (sizeof(char) * (len + 1));
	if (!*p)
		return ;
	ft_strlcpy(*p, start, len + 1);
}

static void	ft_free_all(char **words)
{
	char	**p;

	p = words;
	while (*p)
	{
		p++;
		free(*(p - 1));
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	size_t	word;
	char	**result;
	char	**p;

	word = ft_count(s, c);
	result = ft_calloc(word + 1, sizeof(char *));
	if (!result)
		return (NULL);
	p = result;
	while (word)
	{
		ft_put_word(p, (char **) &s, c);
		if (!*p)
		{
			ft_free_all(result);
			return (NULL);
		}
		p++;
		word--;
	}
	return (result);
}
