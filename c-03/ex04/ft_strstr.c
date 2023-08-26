/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:10:47 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/08 18:38:16 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}	
/*
int	main()
{
	char	text[] = "Salut !!hma hfthtfhtrkjbhbhjb";
	char	find[] = "";
	char	*result = ft_strstr(text, find);
	char	*result2 = strstr(text, find);

	printf("OUTPUT: %s\n", result);
	printf("ORIGINAL: %s\n", result2);

	return (0);
}*/
