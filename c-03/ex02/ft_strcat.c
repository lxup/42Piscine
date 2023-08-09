/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:24:02 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/07 15:43:55 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

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
/*
int	main()
{
	char	text1[] = "SALUTWSH";
	char	text2[] = "TESTT";
	char	text3[] = "SALUTWSH";
	char	text4[] = "TESTT";

	strcat(text3, text4);
	ft_strcat(text1, text2);
	printf("OUTPUT: %s\n", text1);
	printf("ORIGINAL: %s\n", text3);
	return (0);
}*/
