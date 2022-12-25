/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:53 by wluedara          #+#    #+#             */
/*   Updated: 2022/12/24 23:03:06 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct stack {
	int		num;
	struct	stack	*next;
}	t_stack;

//creat link list
void	put_in_stack(char *av, t_stack *a_stack);
void	my_print(t_stack *node);

//convert into number
size_t	find_size(char **n);
int		*convert_at(char *s);


#endif