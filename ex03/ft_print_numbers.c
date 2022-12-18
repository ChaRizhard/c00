/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:08:30 by rtran             #+#    #+#             */
/*   Updated: 2022/12/06 13:41:19 by rtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i >= 48 && i <= 57)
	{
		write (1, &i, 1);
		i++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
	return(0);
}
*/
