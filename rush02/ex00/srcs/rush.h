/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:28:43 by bpoumeau          #+#    #+#             */
/*   Updated: 2022/07/24 21:56:06 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

int		ft_str_is_numeric(char *str);
void	ft_putchar(char c);
void	ft_putstr_n(char *str);
void	ft_putstr(char *str);
void	ft_puterror(void);
int		ft_strlen(char *str);
int		ft_dict_len(char *str);
char	*ft_dict_into_str(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*tabbythree(char *str);
int		ft_nbrofnb(char *str);
int		what_is_it(char *str);
void	ft_fill_typeo(int *k, char *str, char **dest);
void	ft_fill_type1(int *k, char *str, char **tab);
void	ft_fill_type2(int *k, char *str, char **tab);
void	ft_fill_type3(int *k, char *str, char **tab);
int		ft_fill_tab(int *k, char *str, char **dest);
char	**ft_split_in_preword(char *str);
int		ft_char_is_from_base(char c, char *base);
char	*ft_key_to_value(char *str, char *dict);
int		ft_write_this_beauty(char *str, char *dict);
void	ft_putword_from_instruct(char *instruct, char *dict);
int		ft_checkfindable(char **tabinstruct, char *dict);
char	*ft_checkstr(char *str, char *to_find);
int		ft_is_false(char *str, int size);
void	ft_2free(char *str, int *str1);
char	**ft_alloc_dest(char *str);
void	ft_free_tab(char **tab);
void	ft_free_all_this(char **tab, char *str);
char	*ft_shift_0(char *str);
void	ft_put_a_0_str(char **tab, int *k);

#endif
