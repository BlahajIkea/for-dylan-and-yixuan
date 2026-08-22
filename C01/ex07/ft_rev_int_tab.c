/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:11:46 by mwong             #+#    #+#             */
/*   Updated: 2026/06/22 11:13:29 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	start = 0;
	end = size -1;
	while (start < end)
	{
		swap(&tab[start], &tab[end]);
		swap(&tab[start], &tab[start]);
		start++;
		end--;
	}
}

void	swap(int *a, int *b) 
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	string[] = {3, 6, 2, 3, 6, 10};
	int	size;
	size = 6;
	
	int	i;
	i = 0;
	ft_rev_int_tab(string, size);

	while (i < size)
	{
		printf("%d, ", string[i]);
		i++;
	}
	return (0);
}
*/
