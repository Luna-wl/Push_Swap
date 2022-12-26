/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:53 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/26 16:01:36 by wluedara         ###   ########.fr       */
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
void	add_first(t_stack **a_stack, int n);

//free split
void	free_split(char **str);

//find 2star length
size_t	find_size(char **n);

int		digit_mai(char **s);

#endif