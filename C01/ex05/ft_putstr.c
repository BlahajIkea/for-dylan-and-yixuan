/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:23:34 by mwong             #+#    #+#             */
/*   Updated: 2026/06/18 13:34:22 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(ex05)

____EXERSIZE____

This exersize wants us to print out a string to the terminal 
with the write function.

____ft_str___

Firstly we put an
int	i;
i = 0;

The reason why we make an int 'i' is so we have an 
iterator.
An interator helps us to access elements in an array
or string, by using i++.

strings and arrays are very similar in nature.
Since they are just a place in memory, we need an iterator
in order to go iterate through it.

____WHILE____

Now using the iterator and the while loop we are able to iterate 
through the string via the iterator.

while (str[i] != '\0')
	i++;

Now here is how it works:

While the string's index or iterator has NOT reached
the null byte which is the computers way of
checking if the string has reached the end.

Then it will iterate through it via i++.
Since strings and arrays are simliar we are able to use the 
brackets or '[]' which are normally used for arrays to use with the
iterator.

If we were to put a number instead of our iterator in those brackets, 
then the letter that will be written out by by write function would be 
the location in the string (starting from 0) instead of our iteratator. 

Without this null byte the computer might encounter errors and
undifined behaivor.

____WRITE pt: 1____

The write function is different. 
As we know the first one is the terminal.

Second one is the characters we want to print out.

The last one is the amount of bytes we need to write out 
words.

So in the second place we put the string. 
This time we don't have to dereference it using the '&', since
we don't have to dereference it.

Lastly is the amount of bytes, and the amount of bytes is the amount
in the i++.
So all we gotta do is just put the iterator inside of of the amount of bytes.

_____WRITE pt: 2_____
Now something to keep in mind is that we have to put the write function
outside of the while loop. 

If we were to put the write function, it would write it every single time the 
loop repeats so it would print out the new letter and the previous ones 
that the iterator went through already.

So instead we are going to to print it after 
the iterator is done iterating though the string.
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}
/*
int	main(void)
{
	char a[] = "Coding is certainly an experence";
	ft_putstr(a);
	
	return (0);
}
*/
