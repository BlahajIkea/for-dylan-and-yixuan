/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 09:19:06 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 16:48:39 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
(ex03)

____EXERSIZE____

This exersize wants us to check if a string is numeric (1-9) and 
if there is only numbers print out 1.
If not print out 0;

____ft_is_numeric____

The while loop loops through the pointer string, and checks
if the string does NOT from the character '0' and less than '9'.

Then keep looping through the string until the end.. 
Or once the if
statement finds a character which is a letter then it will
return a 1.

____main____

Notice in the main function there is a 'int d'.
That is bascially a int that we can print out that
will print out either 1 or 0.

The reason why we do this is because the terminal doesn't display the
return values. So we need to make an int which we can print out and assign 
the value of the return from the ft_str_is_numeric.
*/

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char abc[] = "hello";
	int d = ft_str_is_numeric(abc);
	ft_str_is_numeric(abc);
	printf("%d", d);
}
*/
