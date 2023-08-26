/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:57:08 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/20 15:58:30 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_print_puissance(int tab_nbr_size, char **dict)
{
	char	*value;
	int		size;
	int		i;

	size = ((tab_nbr_size - 1) * 3) + 1;
	value = malloc(sizeof(char) * (size + 1));
	if (!value)
		return (0);
	value[0] = '1';
	i = 1;
	while (i < size)
	{
		value[i] = '0';
		i++;
	}
	value[size] = '\0';
	ft_putchar(' ');
	ft_print_exact_value(value, dict);
	free(value);
	return (1);
}

int	ft_print_hundred(char *nbr, char **dict)
{
	char	*c;

	if (nbr[0] == '0')
		return (1);
	c = malloc(sizeof(char) * 2);
	if (!c)
		return (0);
	*c = nbr[0];
	c[1] = '\0';
	ft_print_figure(c, dict);
	ft_putchar(' ');
	ft_print_figure("100", dict);
	free(c);
	return (1);
}

int	ft_print_tens(char *nbr, char **dict)
{
	char	*d;

	while (*nbr == '0')
		nbr++;
	if (!*nbr)
		return (1);
	if (*nbr && ft_print_exact_value(nbr, dict))
		return (1);
	d = malloc(sizeof(char) * 3);
	if (!d)
		return (0);
	*d = nbr[0];
	d[1] = '0';
	d[2] = '\0';
	ft_print_exact_value(d, dict);
	free(d);
	return (0);
}

int	ft_print_trio(char *nbr, char **dict)
{
	int	nbr_len;

	nbr_len = ft_strlen(nbr);
	if (nbr_len == 3)
	{
		ft_print_hundred(nbr, dict);
		if (nbr[0] != '0' && (nbr[1] != '0' || nbr[2] != '0'))
			ft_putstr(" and ");
		nbr++;
	}
	if (ft_print_tens(nbr, dict))
		return (1);
	nbr++;
	ft_putchar('-');
	ft_print_figure(nbr, dict);
	return (1);
}
