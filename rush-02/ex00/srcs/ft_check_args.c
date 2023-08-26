/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:09:18 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/20 15:09:22 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_is_contain_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_number(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_nbr(char *nbr)
{
	int		i;
	int		sign;

	if (ft_strlen(nbr) == 0 || !ft_is_contain_number(nbr))
		return (0);
	i = 0;
	while (ft_is_whitespace(nbr[i]))
		i++;
	sign = 1;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	if (sign == -1)
		return (0);
	while (nbr[i])
	{
		if (nbr[i] < '0' || nbr[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_count_nbr_char_len(char *src, int *index)
{
	int	i;
	int	nbr_len;
	int	only_zero;

	i = 0;
	only_zero = 1;
	while (src[i] && ft_is_whitespace(src[i]))
		i++;
	while (src[i] == '-' || src[i] == '+' || src[i] == '0')
		i++;
	*index = i;
	nbr_len = 0;
	while (src[i] >= '0' && src[i] <= '9')
	{
		if (src[i] != '0')
			only_zero = 0;
		nbr_len++;
		i++;
	}
	if (only_zero)
	{
		*index = i - 1;
		return (1);
	}
	return (nbr_len);
}

char	*ft_clean_nbr(char *src)
{
	char	*dest;
	int		nbr_len;
	int		index;
	int		i;

	nbr_len = ft_count_nbr_char_len(src, &index);
	dest = malloc(sizeof(char) * (nbr_len + 1));
	if (!dest)
		return (0);
	*dest = 0;
	i = 0;
	while (src[index])
	{
		dest[i] = src[index];
		i++;
		index++;
	}
	dest[nbr_len] = '\0';
	return (dest);
}

int	ft_check_args(int argc, char **argv, char **dictpath, char **nbr)
{
	if (argc == 3)
	{
		if (!ft_check_nbr(argv[2]))
			return (0);
		*dictpath = argv[1];
		*nbr = ft_clean_nbr(argv[2]);
		if (*nbr == 0)
			return (0);
		return (1);
	}
	else if (argc == 2)
	{
		if (!ft_check_nbr(argv[1]))
			return (0);
		*dictpath = DEFAULT_DICT;
		*nbr = ft_clean_nbr(argv[1]);
		if (*nbr == 0)
			return (0);
		return (1);
	}
	return (0);
}
