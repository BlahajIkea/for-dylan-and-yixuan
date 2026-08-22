/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 11:44:35 by mwong             #+#    #+#             */
/*   Updated: 2026/06/16 10:39:28 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(ex03)

This exersize requires us to print numbers 1-9.

The nuance in this exersize is that we are required to use the 
write function instead of printf.

So instead of using an 'int' we are using 'char' since we can use ascii
and just ++ the character to get the next one in the list.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/
