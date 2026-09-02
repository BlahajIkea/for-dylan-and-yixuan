/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 14:08:35 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 10:02:03 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
(ex00)

____EXERSIZE____

This exersize is strcpy or string copy.
Which copies the string from source/src, to destination/dest.

____*ft_strcpy____

We are using pointers for both '*dest' and '*src', because
we need the memory locations when swapping.

Then we are making our iterator, which we name as 'i', then
assign it to 0, since that would be the start of the string.

____WHILE____

The while loop checks if the iterator through the 
src/source string has reached the null byte or '\0'.

If not it will start from zero and start copying what 
the source (what we want to copy). 
And override the dest (the copy location).

____RETURN____

Since we know that the return value for the 
function is a char. 
We need to return a char, so we returning  the
destination.

Now notice after the return, we are doing

dest[i + 1] = '\0';

Because strcpy, does NOT copy the null byte or the
'/0', character.

We need the null byte otherwise C will not understand
the end of the string.

So if you were to not include the null by adding it at 
the end, it might cause the program to segfault, or crash.
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (i < src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
	dest[i + 1] = '\0';
}

#include <stdio.h>
int	main(void)
{
	char	a[] = "hello";
	char	b[] = "world";

	printf("Before: %s | %s\n", a, b);
	ft_strcpy(a, b);
	printf("After: %s | %s", a, b);

	ft_strcpy(a,b);
	return (0);
}
