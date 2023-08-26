/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:59:17 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/13 21:08:11 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>

int			ft_number_of_arguments(char *str);
int			ft_char_to_int(char c);
int			*ft_arg_to_tab(char *str, int argc);
int			ft_strlen(char *str);
int			ft_is_num_space(char *str);	
int			ft_check_tab(int *tab, int size);
void		ft_putchar(char c);
int			rush01(int n, int *value);
int			ft_start(int **matrix, int n, int *value);
void		ft_free(int **matrix, int *value, int n);
int			ft_find_solution(int **matrix, int pos[2], int n, int *value);
int			*ft_define_next_pos(int *pos, int *next_pos, int n);
void		ft_print_solution(int **matrix, int n);
void		ft_error(void);

// VERIFY
int			ft_is_valid(int **matrix, int pos[2], int n, int *value);
int			check_row_right(int **matrix, int pos[2], int n, int *value);
int			check_row_left(int **matrix, int pos[2], int n, int *value);
int			check_col_down(int **matrix, int pos[2], int n, int *value);
int			check_col_up(int **matrix, int pos[2], int n, int *value);

#endif
