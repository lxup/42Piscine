/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:02:47 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/20 15:03:11 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>

# define DEFAULT_DICT "dicts/numbers.dict"

void	ft_error(void);
// FT_CHECK_ARGS
int		ft_check_args(int argc, char **argv, char **dictpath, char **nbr);
// FT_CHECK_DICT
int		ft_check_dict(char *dictpath);
int		ft_get_file_size(char *dictpath);
// FT_INIT
int		ft_init(char *dictpath, char *nbr);
// FT_TRIO_NBR
int		ft_trio_nbr_count(char *nb);
char	**ft_split_trio_nbr(char *nbr, int size);
// FT_FREE
void	ft_free(char **dict, char **tab_nbr, char *nbr, char *zerovalue);
// FT_PRINT1
int		ft_print_puissance(int tab_nbr_size, char **dict);
int		ft_print_hundred(char *nbr, char **dict);
int		ft_print_tens(char *nbr, char **dict);
int		ft_print_trio(char *nbr, char **dict);
// FT_PRINT2
int		ft_print_figure(char *nbr, char **dict);
int		ft_print_exact_value(char *nbr, char **dict);
// FT_MANAGE_DICT
int		ft_word_len(char *str);
int		ft_number_len(char *str);
char	*ft_get_dict_word(char *str);
char	*ft_get_dict_number(char *line);
// FT_SPLIT
char	**ft_split(char *str, char *charset);
char	*ft_add_word(char *src, int size);

// FT_TOOLS
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);

// FT_CONDITION
int		ft_is_whitespace(char c);
int		ft_is_alpha(char c);
int		ft_is_lower(char c);
int		ft_is_upper(char c);
int		ft_is_number(char c);

#endif
