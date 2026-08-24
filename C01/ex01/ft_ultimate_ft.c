/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:22:45 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:24:37 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(ex01)

____EXERSIZE____

This exersize needs us to assign 42 to an int which 
has 9 pointers attached to it.

____ft_ultimate_ft____

int x = 42;

Just assigns x to 42 because:

 store  put inside
   x   =  42;

____main____

Now here is the intersting part, 

In order to check if the reasignment
works we have to make to assign ptr1 to &x.

Basically when you assign ptr1, you have to 
dereference it first.

Then you make another pointer int and 
name it something different. In this case
ptr2 = &ptr1.

Which is ptr2 is assigned the value of
pointer ptr1.

So whatever is in ptr1 is inside of ptr2.
*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
#include<stdio.h>
int	main(void) 
{
	int x = 42;
	
	int	*ptr1 = &x;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int	*********ptr9 = &ptr8;

	printf("pointer val: %d\n", *********ptr9);
}
*/
