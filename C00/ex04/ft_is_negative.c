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
(ex04)

This exersize requires us to check if a number is positive or negative.

So we pass a number through a parameter in the ft_is_negative function,
and if the number is less than 0, it is considered a negative number.
*/

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/*
int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(2);
	ft_is_negative(-2);
	ft_is_negative(0);
}*/
