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

/*
(ex07)

____EXERSIZE_____

This exersize wants us to reverse the positions of the ints so that 
if it is:

1, 2, 3, 4, 5.

Then it will flip:

5, 4, 3, 2, 1.

____SWAP____

We are using the same swap function from the previous
exersizes because it makes the code easier to read.

_____ft_rev_int_tab____

Firstly the 'tab' is the string of ints.
Then the size is the size of the string of integers.

Now we make two variables:

'start' and 'end'.

'start' will start at 0.
And the end is:

Since the end of the string is just
the size -1. We can just use
end = size - 1.

____WHILE____

The while loop will check if the start which
is zero, is reached the end.

Then we are swapping the start and the end
using ft_swap.

Then here is the imporant one:

start++;
end--;

This is important since we need to add one to the count
and minus from the size. So all the [] are the 
swapped numbers so it will look like this:

Starting:
1, 2, 3, 4, 5.

Time to start the tab swap:

[1], 2, 3, 4, [5]. - prep.

[5], 2, 3, 4, [1]. - swap.

5, [2], 3, [4], 1. - prep.

5, [4], 3, [2], 1. - swap.

1, 2, 3, 4, 5.

Ending:

5, 4, 3, 2, 1.

*/
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
	int	string[] = {1, 2, 3, 4, 5,};
	int	size;
	size = sizeof(string) / sizeof(string[0]);
	
	int	i;
	i = 0;
	printf("before swapping\n");

	while (i < size) 
	{
		printf("%d, ", string[i]);
		i++;
	}	
	printf("\nafter:\n");
	ft_rev_int_tab(string, size);
	i = 0;
	while (i < size)
	{
		printf("%d, ", string[i]);
		i++;
	}
	return (0);
}*/
