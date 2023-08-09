/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:23:51 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/08 15:44:58 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	while (str[i] != '\0' && (str[
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int     checkbase(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (!str[i])
		return (0);
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
                        || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			return (0);
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nu;
	int	base_len;

	base_len = ft_strlen(base);
	if (!checkbase(base) || base_len <= 1)
		return (0);
	
}

int	main(int argc, char **argv)
{
	int	output;

	if (argc != 3)
	{
		write(2, "Invalide number of arguments\n", 30);
		return (1);
	}
	output = ft_atoi_base(argv[1], argv[2]);
	printf("OUTPUT: %d\n", output);

	return (0);
}
