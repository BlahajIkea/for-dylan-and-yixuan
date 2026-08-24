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

Firstly we must make a temp variable since we need 
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
