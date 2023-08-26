/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduvnjak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:18:25 by sduvnjak          #+#    #+#             */
/*   Updated: 2023/08/06 16:38:18 by sduvnjak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int t);

int	ft_atoi(char *str)
{
	int				nb;
	int				sign;
	unsigned int	i;

	i = 0;
	while (str[i] != 0 && str[i] <= 32)
		i++;
	sign = 1;
	while (str[i] != 0 && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	nb = 0;
	while (str[i] != 0 && str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - '0';
	return (nb * sign);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(2, "Incorrect number of arguments\n", 30);
		return (1);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (x <= 0 || y <= 0)
	{
		write(2, "Arguments should be greater than 0\n", 35);
		return (1);
	}
	rush(x, y);
	return (0);
}
