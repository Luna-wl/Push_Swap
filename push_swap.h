/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:53 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/05 15:07:16 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack {
	int					num;
	struct s_stack		*next;
}	t_stack;

//my_split
char	**ft_split(char const *s, char c);
char	*my_split(char const *s, char c);
int		count_letter(char const *s, char c);
int		check_word(char const *s, char c);
int		ft_strlen(const char *str);
//atoi
long	my_atoi(char *str, t_stack **a, char **split, t_stack *list);
//link list utill
void	add_hang(t_stack **stack, t_stack *hang);
void	add_hua(t_stack **stack, t_stack *hua);
void	lop_stack(t_stack **stack, int n);
//creat link list
void	add_list(t_stack **a_stack, char *n, char **split);
void	put_in_stack(char *av, t_stack **a_stack);
void	my_print(t_stack *node);
size_t	find_size(char **n);
//check ERROR
int		digit_mai(char *s);
void	error406(t_stack **stack, int mode);
void	ploi_split(char **str);
void	ploi_stack(t_stack **stack);
void	ploi_all(t_stack **a, char **split, t_stack *list);
int		truat_stack(t_stack **stack);
int		dup_mai(t_stack **stack);
//sarab
void	sarab_swap(t_stack **stack);
void	sarab_stack(t_stack **a, t_stack **b, char mode);
//push
void	push_stack1to2(t_stack **ichi, t_stack **ni);
void	push_urhandup(t_stack **ichi, t_stack **ni, char mode);
//rotate
void	rotate(t_stack **stack);
void	rorotate(t_stack **ant, t_stack **bee, char mode);
//rerotate
void	rerotate(t_stack **stack);
void	rerotate_ab(t_stack **ant, t_stack **bee, char mode);

#endif