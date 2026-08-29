/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 09:05:45 by mwong             #+#    #+#             */
/*   Updated: 2026/06/16 10:30:26 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(ex01)

This exersize requires us to print out the letters a-z.

Firstly we make a ft_putchar(char c) so that we can have
an easier time printing out the required words.

Something to note is that when we are using 'a'. 
We are using the character 'a'. 

If we don't have the single colons, then we are using ascii instead 
of character or char.

So we can start the count at the character 'a', then while alpha is 
less than 'z', we then increment it by alpha++.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha != 'z')
	{
		ft_putchar(alpha);
		alpha++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/
