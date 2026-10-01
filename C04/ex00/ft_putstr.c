/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::     */
/*   ft_putlen                                         :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:39:57 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:44:47 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
____EXERSIZE____

This exersize wants us to get the length of a string.

____ft_strlen____

First we start the string at 1 since we want start the count
from 1.

Then we are doing i++; 
so that it will iterate though the string and that is our int.

So we are able to return an int, which is our iterator or 'i'.
So we can return the value, which is i.
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void) 
{
	char	str[] = "hello";	
	printf("%d", ft_strlen(str));
}
*/
