/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:08:10 by mwong             #+#    #+#             */
/*   Updated: 2026/06/23 16:30:06 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void) 
{
	char abc[] = "WHY"; // CHANGE ME IN EVAL

	int done;
	done = ft_str_is_lowercase(abc);

	printf("if letter is lowercase print 1\n");

	printf("lowercase? \n%d", done);

	ft_str_is_lowercase(abc);
}
*/
