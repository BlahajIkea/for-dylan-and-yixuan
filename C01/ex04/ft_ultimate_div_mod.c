/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:02:15 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 17:25:12 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(ex04)

____EXERSIZE____

This exersize wants us to divide 'int *a' by 'int *b'
and store it into 'div'.

Then mod or modify 'int a' by 'int *b', and store it into
'mod'.

____ft_ultimate_div_mod____

First we make two ints 'div' and 'mod'.

_____DIV_____
div = *a / *b;

Now what this does is that it divides 

*a by *b, and stores it into 'div'.

____MOD____

mod = *a % *b;

Mod or % modulates the numbers so 
it divides but doesn't give the output of the divide.

Mod only gives the REMAINDER off the division.

____main____

Since we are taking those variables from places from memory,
once again we have to dereference them with '&'.
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void) 
{
	int a = 42;
	int b = 10;
	ft_ultimate_div_mod(&a, &b);

	printf("a: %d, b: %d", a, b);
}
*/
