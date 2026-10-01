/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:00:21 by mwong             #+#    #+#             */
/*   Updated: 2026/06/24 16:54:00 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
____EXERSIZE____

This exersize wants us to change the string into 
uppercase by using ascii.
Since the difference in a uppercase and lowercase letter
in ascii is 32 we can do 'str[i] -= 32' in order to change
character's values.

_____WHILE____

Now first we are looping though the string 
using an if statement to check if the string 
is less than uppercase 'A' or 'Z'.

So using the if we can check the value at the itereators
part in the string is less than the uppercase
values. 

Then if that is true then we are adding -= 32, since 
the difference between the uppercase and lowercase is
32 values on the Hex scale.
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && *str <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void) 
{
	char abc[] = "heeeee";	
	ft_strupcase(abc);
	printf("%s", ft_strupcase(abc));
	return (0);
}
*/
