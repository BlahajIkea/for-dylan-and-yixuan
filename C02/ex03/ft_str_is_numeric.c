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

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > '0' && str[i] < '9')
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "1234";
	int	done = ft_str_is_numeric(a);
	printf("%d", done);
}
*/
