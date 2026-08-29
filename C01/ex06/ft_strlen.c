/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 09:40:19 by mwong             #+#    #+#             */
/*   Updated: 2026/06/22 11:07:17 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(ex06)

____EXERSIZE____

This exersize wants us to get the length of a string and then
return the size of it.

____ft_strlen____

First we make an unsigned int.

An unsigned int is just an int that doesn't have
any negative values, only positive ones.

____return (i)____

Now about return values:

Return values are values that are returned to the 
computer.

The standard is that if you look at the return
value before the name of the function.
It will tell you the required return. 

So if it says 'int' then return an int.
If it is a 'char' then return a char.

So since we know the return value is an int,
we will return the value which is 'i'. 

We know the return value is an int, since the first word
on the ft_strlen function is int.

If the return value for a int is an integer.
We have to return the unsigned int 'i'.
*/

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void) 
{
	char *mystr = "0123456789";
	printf("name: %s \nlength: %d", mystr, ft_strlen(mystr));

}
*/
