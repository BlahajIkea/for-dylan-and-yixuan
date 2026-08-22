/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 16:30:38 by mwong             #+#    #+#             */
/*   Updated: 2026/06/25 10:37:14 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str) 
{
	while (*str) 
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void) 
{
	char abc[] = "YAY"; // CHANGE ME IN EVAL

	ft_str_is_uppercase(abc);

	int done;
	done = ft_str_is_uppercase(abc);

	printf("uppercase = 1\n");

	printf("uppercase? \n%d", done);

}
*/
