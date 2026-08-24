/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 11:35:20 by mwong             #+#    #+#             */
/*   Updated: 2026/06/15 15:45:29 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
(ex02)
____EXERSIZE____

This exersize wants us to print the alphabet from a-z.


____ft_print_reverse_alphabet____

So we are using the 'char' since we can use ascii and ++ through 
the alphabet, so we just set the starting letter to 'Z'. 

____WHILE____

The while loop wil loop through the charcaters and check
if while the character is 'a', and it will use ft_putchar() 
with the paremeter with 'rev'.

Then it will -- through going backwards, instead of forwards since 
we need to go back on the ascii table.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	rev;

	rev = 'z';
	while (rev >= 'a')
	{
		ft_putchar(rev);
		rev--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
