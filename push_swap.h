/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:53 by wluedara          #+#    #+#             */
/*   Updated: 2023/01/04 15:26:37 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack {
	int					num;
	struct s_stack		*next;
}	t_stack;

//link list utills
// void	add_back(t_stack **a_stack, int n);
// void	add_list(t_stack **a_stack, int n);
void	add_back(t_stack **stack, t_stack *hang);
void	add_list(t_stack **a_stack, char *n, char **split);
void	add_hua(t_stack **stack, int n);
void	lop_stack(t_stack **stack, int n);
//creat link list
void	put_in_stack(char *av, t_stack **a_stack);
void	my_print(t_stack *node);
//find 2star length
size_t	find_size(char **n);
//free split
void	ploi_split(char **str);
//check ERROR
int		digit_mai(char *s);
void	error406(t_stack **stack);
void	ploi_stack(t_stack **stack);
void	ploi_all(t_stack **a, char **split, t_stack *list);
//sarab
void	sarab_swap(t_stack *stack);
void	sarab_a_and_b(t_stack *a, t_stack *b);
//pa pb
void	push_stack1to2(t_stack **ichi, t_stack **ni);
//rotate a&b
void	rotate(t_stack **stack);
void	rorotate(t_stack **ant, t_stack **bee);
//rra&rrb rrr
void	rerotate(t_stack **stack);
void	rerotate_ab(t_stack **ant, t_stack **bee);
//atoi
long	my_atoi(char *str, t_stack **a, char **split, t_stack *list);

void	truat_stack(t_stack *stack);

#endif