/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:01:30 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/17 19:44:18 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	total_len;

	i = 0;
	sep_len = ft_strlen(sep);
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*text;
	int		i;
	int		total_len;

	i = 0;
	total_len = ft_total_size(size, strs, sep) + 1;
	text = malloc(sizeof(char) * total_len);
	if (!text)
		return (0);
	*text = 0;
	while (i < size)
	{
		ft_strcat(text, strs[i]);
		if (i < size - 1)
			ft_strcat(text, sep);
		i++;
	}
	return (text);
}
/*
int	main(void)
{
	#include <stdio.h>
	int	size = 5;
	char	*strs[] = {"a", "b", "salut", "", "OK"};
	char	sep[] = "|--|";

	printf("OUTPUT: %s\n", ft_strjoin(size, strs, sep));
	return (0);
}*/
