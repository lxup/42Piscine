/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:27:59 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/22 15:28:00 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include "ft_struct.h"
# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFFER_STDIN	1000000000

void		ft_error(void);
void		ft_error_map(void);
void		ft_exit(void);
int			ft_init(int argc, char *argv);
char		**ft_split(char *str);

// FT_GET_MAP
t_map		ft_get_map(int argc, char *argv);

// FT_CHECK_MAP
int			ft_is_map_valid(char **array_map, t_map map);

// FT_CHECK_FILE
int			ft_check_map_line_value(char **array_map, t_map map);
int			ft_check_map_line_len(char **array_map);

// FT_SOLVER
t_map		ft_solver(t_map map);
t_square	find_square(t_map map, t_square square, int x_start, int y_start);
int			square_size(t_square square);
int			check_square(t_map map, t_square square);
t_map		fill_square(t_map map, t_square square);

// FT_MATRIX_SIZE
int			x_size(char **matrix);
int			y_size(char **matrix);

// FT_FREE
void		ft_free(char **dict);
void		ft_free_map(t_map map);

// FT_MANAGE_FILE
char		**ft_read_file(char *dictpath);
char		**ft_read_stdin(void);
int			ft_get_file_size(char *dictpath, int *file);

// TOOLS
int			ft_strlen(char *str);
int			ft_strprintable_len(char *str);
char		*ft_strdup(char *src);
int			ft_atoi(char *str);
char		**ft_copy(char **array_map);
void		ft_putstr(char *str);
void		ft_putchar(char c);

// CONDITIONS
int			ft_is_printable(char c);
int			ft_is_number(char c);
int			ft_is_whitespace(char c);

#endif
