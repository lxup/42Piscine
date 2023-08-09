/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:23:19 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/05 19:28:55 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_last_line(int x)
{
	int	compteur;

	compteur = 0;
	while (compteur < x)
	{
		if (compteur == 0 || compteur == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		compteur++;
	}
}

void	body_line(int x)
{
	int	compteur;

	compteur = 0;
	while (compteur < x)
	{
		if (compteur == 0 || compteur == x - 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		compteur++;
	}
}

void	rush(int x, int y)
{
	int	compteur;

	if (x <= 0 || y <= 0)
		return ;
	compteur = 0;
	if (compteur == 0)
	{
		first_last_line(x);
		compteur++;
		ft_putchar('\n');
	}
	while (compteur > 0 && compteur < y - 1)
	{
		body_line(x);
		compteur++;
		ft_putchar('\n');
	}
	if (compteur == y - 1)
	{
		first_last_line(x);
		compteur++;
		ft_putchar('\n');
	}
}
