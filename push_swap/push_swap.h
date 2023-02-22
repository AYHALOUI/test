#ifndef PUSH_SWAP_h
#define PUSH_SWAP_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#include "printf/ft_printf.h"
#include "libft/libft.h"



// parsing functions
void    quit();
int     check_is_empty(char *str);
int     is_contain_allspace(char *str);
int     check_is_digit(char *str);
void    check_string(int ac, char *str);

// utils functions
int check_if_duplicate(t_list **head);
char **check_and_join(int ac,char **av);
void add_element(t_list **head, int ac, char **av);
void	sa(t_list **head);

#endif