/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:02:06 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/22 15:02:07 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_add_word(char *src, int size)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc (sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_printable(str[i]))
		i++;
	return (i);
}

int	ft_count_word(char *str)
{
	int	i;
	int	count;
	int	word_len;

	i = 0;
	count = 0;
	word_len = 0;
	while (str[i])
	{
		while (str[i] && !ft_is_printable(str[i]))
			i++;
		word_len = ft_count_word_len(str + i);
		if (word_len)
			count++;
		i += word_len;
		word_len = 0;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		word_len;
	int		count_word;
	char	**tab;

	i = 0;
	j = 0;
	word_len = 0;
	count_word = ft_count_word(str);
	tab = malloc(sizeof(char *) * (count_word + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] && !ft_is_printable(str[i]))
			i++;
		word_len = ft_count_word_len(str + i);
		if (word_len)
			tab[j++] = ft_add_word(str + i, word_len);
		i += word_len;
		word_len = 0;
	}
	tab[j] = 0;
	return (tab);
}
