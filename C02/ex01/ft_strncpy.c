/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:16:28 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 11:38:22 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(ex00)

____EXERSIZE____

This exersize wants us to to copy a string onto anothe string
up to a certain number which is 'n' or number.

Notice how we are using an insigned int. 
An unsigned int that is only postive so there is no negative ints.

____*ft_strncpy____

We got some parameters to work with.

char *dest, char *src, unsigned int.

*dest is a pointer to memory about the destination aka where we want
to copy to.

*src is a name to a pointer to a place in memory from what we we
want to copy.

The unsigned int is just a int without any negatives.

____*ft_strncpy_2____

First we make an unsigned int and name it 'i'.

It is very imporant that we are using an unsinged int since
in the parameters of the function '*ft_strncpy'. 
It is also unsigned so we have to make sure the one
that we delcare as 'i' is also unsinged.

____WHILE____

while (i < n && src[i] != '\0')

This checks if the 'i' iterator is less than 'n', which 
is the unsigned int inside of the function parameters.

dest[i] = src[i];
Basically whaterver is in the src, copy it into
dest, by overriding what is inside or dest[i]. 

'i' being the iterator so:

The number increases so:

dest[0] = src[0];
dest[1] = src[1];
dest[2] = src[2];
The numbers are instead 'i' which is the iterator.

i++:
To ++; through the string.

____IF____

This is why we need a buffer.
Now here is the imporant part without this if statment, the string
would technically have no end and could cause some problems.

So this checks if the 'i' iterator is less than 'n' which is the
amount we want to copy.

____RERTURN____

Since we know the return value for the string is a char
we can just return (dest).

____MAIN____

We make two variables:

char a[6];
char b[6];

If we were to put 5 instead of 6, the program would complain because 
when we copy strings using strcpy or strncpy.

We need to add one more character for the '\0'. Or null byte, since 
that is what C knows is the end of the string.

As stated above, without this buffer, the program might do
some undifined behavior.

Also after that we are making a variable named 'amt' and assigning
it to 3.
Because we need a number to copy until, so it will copy up to 3.

Then we are running the function that we made, and placing the 'amt' 
in the third paramter slot for the *ft_strncpy.
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (i < n)
			dest[i] = '\0';
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[6] = "01234";
	char	b[6] = "56789";
	int	amt = 3;	

	printf("Before: %s | %s\n", a, b);
	ft_strncpy(a, b, amt);
	printf("After: %s | %s\n", a, b);
}
*/
