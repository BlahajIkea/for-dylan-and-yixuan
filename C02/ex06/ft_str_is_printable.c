/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 10:19:23 by mwong             #+#    #+#             */
/*   Updated: 2026/06/24 11:16:49 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
____EXERSIZE_____

This exersize wants us to check if a letter is printable 
or not. For this exersize we are going to use ASCII.

The '0' character is 0. While the '31' character is
'unit seperator' which is an unprintable letter.
It does 'exist' but you cannot print it like other characters.

So basically the if statement is if the string has a
unprintable letter it will return 1 which is an error.

Else it will print out 0 which means no errors, or all
characters present in the string are printable characters.
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void) 
{
char abc[] = "weho";
int	done;
done = ft_str_is_printable(abc);

} 
*/
