/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:53 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/27 22:49:32 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack {
	int					num;
	struct s_stack		*next;
}	t_stack;

//creat link list
void	put_in_stack(char *av, t_stack **a_stack);
void	my_print(t_stack *node); // del after finish
void	add_back(t_stack **a_stack, int n);
void	add_list(t_stack **a_stack, int n);
//free split
void	ploi_split(char **str);
//find 2star length
size_t	find_size(char **n);
int		digit_mai(char *s);
void	error404(char **s);
//sarab
void	sarab_swap(t_stack *stack);
void	sarab_a_and_b(t_stack *a, t_stack *b);
//pa pb
void	push_stack1to2(t_stack **ichi, t_stack **ni);
void	add_hua(t_stack **stack, int n);
void	lop_stack(t_stack **stack, int n);
//rotate a&b
void	rotate(t_stack **stack);
void	rorotate(t_stack **ant, t_stack **bee);
//rra&rrb rrr
void	rerotate(t_stack **stack);
void	rerotate_AB(t_stack **ant, t_stack **bee);

#endif