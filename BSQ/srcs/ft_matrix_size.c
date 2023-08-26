/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlimous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 00:29:44 by chlimous          #+#    #+#             */
/*   Updated: 2023/08/22 00:34:20 by chlimous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	x_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[size])
		size++;
	return (size);
}

int	y_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[0][size])
		size++;
	return (size);
}
