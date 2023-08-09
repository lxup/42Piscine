/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:32:51 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/07 15:15:15 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int     main()
{
	char    text[99] = "";
	char    texte[99] = "";

	printf("strcmp: %d\n", strncmp(text, texte, 4));
	printf("ft_strcmp: %d\n", ft_strncmp(text, texte, 4));
	return (0);
}*/
