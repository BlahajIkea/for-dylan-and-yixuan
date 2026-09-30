/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcmp.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 14:08:35 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 10:02:03 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
____EXERSIZE____

This exersize is wants us to get the difference
between two strings and return the difference between the values.

_____WHILE____

This while loop will check if the the values are the same
and if they are then it will keep repeating though the string 
until there is a difference.

Then return since we need to return the value
since the return value of the function is a int.
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "abc";
	char	b[] = "ab";
	int 	done = ft_strcmp(a, b);
	printf("%d", done);
	return (0);
}
*/
