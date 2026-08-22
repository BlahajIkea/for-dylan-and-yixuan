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

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && *str <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void) 
{
	char abc[] = "HEE";
	
	ft_strupcase(abc);

	printf("%s", ft_strupcase(abc));
}
