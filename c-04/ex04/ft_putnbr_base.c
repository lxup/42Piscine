/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:50:52 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/10 21:33:22 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str[i])
		return (0);
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	long	nu;
	int		base_len;

	base_len = ft_strlen(base);
	if (!checkbase(base) || base_len <= 1)
		return ;
	nu = nbr;
	if (nu < 0)
	{
		ft_putchar('-');
		nu *= -1;
	}
	if (nu > (base_len - 1))
		ft_putnbr_base(nu / base_len, base);
	ft_putchar(base[nu % base_len]);
}
/*
int	main(void)
{
	char	*base;

	base = "0123456789ABCDEF";
	ft_putnbr_base(-2147483648, base);
	return (0);
}
