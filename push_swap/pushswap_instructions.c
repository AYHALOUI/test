/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_instructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:24:19 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/22 18:38:46 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// create a function called sa that swaps the first two elements at the top of stack a. Do nothing if there is only one or no elements).
void	sa(t_list **list)
{
    int temp;

    if ((*list)->next != NULL)
    {
        temp = (*list)->data;
       (*list)->data = (*list)->next->data;
       (*list)->next->data = temp;
    }
}

//explaination of the code:
//1- we check if the list is not empty and if it has more than one element
//2- we create a temp variable to store the first element
//3- we swap the first element with the second element
//4- we put the first element in the second element
