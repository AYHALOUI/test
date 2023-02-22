/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:22:33 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/22 16:07:34 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include "/Users/ahaloui/Desktop/push_swap/push_swap.h"

// static int	is_white_space(char c)
// {
// 	if ((c >= '\t' && c <= '\r' ) || c == ' ' )
// 		return (1);
// 	return (0);
// }

// int	ft_atoi(char *str)
// {
// 	int	signe;
// 	int	result;

// 	result = 0;
// 	signe = 1;
// 	while (is_white_space(*str))
// 		str++;
// 	if (*str == '+' || *str == '-')
// 	{
// 		if (*str == '-')
// 			signe = -1;
// 		str++;
// 	}
// 	while (ft_isdigit(*str))
// 	{
// 		result = (10 * result) + *str - '0';
// 		str++;
// 	}
// 	return (result * signe);
// }

int ft_atoi(char *str)
{
	unsigned int i;
	int sign;
	unsigned long int number;
	
	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			quit();
		number = (str[i] - '0') + (number * 10);
		i++;
	}
	if ((number > 2147483648 && sign == -1) || (number > 2147483647 && sign == 1))
		quit();
	return (number * sign);
}