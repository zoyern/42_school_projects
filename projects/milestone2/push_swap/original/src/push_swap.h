/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almounib <almounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:59:30 by marvin            #+#    #+#             */
/*   Updated: 2024/05/20 17:21:51 by almounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <push_swap/types.h>

void	push_swap(t_solib *solib, int *nbrs, int len);
int		is_sorted(t_pswp_stack *stack);
void	push_swap_print(char *head, t_pswp *pswp);
int		check_doublon(int *nbrs);

#endif