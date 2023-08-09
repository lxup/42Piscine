/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:21:36 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/07 15:10:52 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char	text[99] = "abca";
	char	texte[99] = "abc";

	//printf("strcmp: %d\n", strcmp(text, texte));
	printf("ft_strcmp: %d\n", ft_strcmp(text, texte));
	return (0);
}*/
