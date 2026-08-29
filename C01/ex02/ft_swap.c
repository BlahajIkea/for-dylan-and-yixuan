/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:39:57 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:44:47 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(ex02)

____EXERSIZE____

This exersize wants us to swap the values of two ints.

____ft_swap____

Notice how we are using pointes, so what this function
does is that it uses pointers and swaps the values in the parameters
of the function.

The reason why we use pointers in this is because we need to use 
memory locations when swapping, instead of using basic ints, we need
the locations in the PC's memory to swap the variables.

Firstly we must make a temp variable since when we swap the variables
we need to store it first.


____LOGIC____
Now here is how it works:

Whatever is stored in '*a' put into temp.
Whatever is stored in '*b' put into '*a'.
Whatever is stored in 'temp' you put into '*b'.

____main____

Ok so when you run the program, notice how we are
dereferencing the pointer with the '&'. 

Without it, the computer could not find the place 
of the variables we want to swap and would fail.
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)  
{
	int	a = 1;
	int	b = 2;

	printf("Before swap %d | %d\n", a, b);
	ft_swap(&a, &b);
	printf("After %d | %d", a, b);

}*/
