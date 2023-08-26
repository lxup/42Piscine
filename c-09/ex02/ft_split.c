/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:41:42 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/22 15:59:47 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

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

int	ft_count_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_charset(str[i], charset))
		i++;
	return (i);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	count;
	int	word_len;

	i = 0;
	count = 0;
	word_len = 0;
	while (str[i])
	{
		while (str[i] && ft_is_charset(str[i], charset))
			i++;
		word_len = ft_count_word_len(str + i, charset);
		if (word_len)
			count++;
		i += word_len;
		word_len = 0;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		word_len;
	int		count_word;
	char	**tab;

	count_word = ft_count_word(str, charset);
	tab = malloc(sizeof(char *) * (count_word + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	word_len = 0;
	while (str[i])
	{
		while (str[i] && ft_is_charset(str[i], charset))
			i++;
		word_len = ft_count_word_len(str + i, charset);
		if (word_len)
			tab[j++] = ft_add_word(str + i, word_len);
		i += word_len;
		word_len = 0;
	}
	tab[j] = 0;
	return (tab);
}
/*
int	main(void)
{
	char	str[] = "aa kheys comment tu vas ?tt";
	//char	str[] = "-";
	char	charset[] = "akt";
	char	**result;
	int	i;

	result = ft_split(str, charset);
	i = 0;
	while (result[i])
	{
		printf("Index %d : %s\n", i, result[i]);
		i++;
	}
	//printf("OUTPUT% %s\n", result[1]);
	return (0);
}*/
