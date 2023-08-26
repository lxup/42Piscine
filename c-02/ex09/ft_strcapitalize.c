* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:58:35 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/07 19:11:05 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_upercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	return (ft_is_lowercase(c) || ft_is_upercase(c) || ft_is_number(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_alpha(str[i - 1]) && ft_is_lowercase(str[i]))
			str[i] -= 32;
		else if (ft_is_alpha(str[i - 1]) && ft_is_upercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int     main()
{
        char    text[] = "salut,tu vas ? 42mots quarante-deux; cinquante+et+un";
        printf("AVANT: %s", text);      
        ft_strcapitalize(text);
        printf("APRES: %s", text);
}*/
