/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:34:17 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/07 14:39:31 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_upercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (1);
	while (str[i] != '\0')
	{
		if (ft_is_upercase(str[i]) || ft_is_lowercase(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*text;

	text = "TEST";
	printf("OUTPUT: %d", ft_str_is_alpha(text));
}*/
