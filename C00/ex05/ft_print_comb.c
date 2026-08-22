/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 15:58:41 by mwong             #+#    #+#             */
/*   Updated: 2026/06/16 10:38:30 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
____EXERSIZE____
This exersize wants us to print numbers up till 789, but with no repeating
Numbers.

The tricky part about this exersize is that 
since they have to be all unique umbers so 999, or 555, or 111. 

They all have to be unique: 012, 013, 014 etc.

____FUNCTIONS_____
So what we are doing is we are printing to the terminal using 
the write function.
So once gain we are using the ft_putchar(char c) function to print
but instead of one parameter we have 3.

Since our upper limit is '789' we are only have to check if
a <= 7, b <= 8, c <= 9.

Then the assignments:
a = '0' which is a = 'character zero'.
b = a + 1 which is just whatever a is + 1.
c = b + 1 which is just whatever b is + 1.

____WHILE LOOPS____
Then the while loops:
while (a <= 7)
while (b <= 8)
while (c <= 9)

These check if the numbers haven't gotten to their limits and
keeps adding one to them until they reach the limit (789),

Then at the end of the nested while loops is the ft_putchar(a,b,c).
Which then prints out all the letters.

____COMMAS'S AND SPACES____

We need to print all the letters which are unique
with comma's and spaces until the last one which 
doesn't end with a comma or space.

So that if statment checks if all the numbers have 
reached their limits (789) and if it is true break out of the loop.

Then the second if statement checks if they havent' reached the limit, then 
it will keep printing the comma and the space. 

____IMPORANT____
Do note that the amount of bytes
in the write function in the second if statement is 2.
Since we need enough to store 2 bytes worth of data, and each 'char' is worth
1 byte each.
*/

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	comma(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar (a, b, c);
				if (a == '7' && b == '8' && c == '9')
					break ;
				if (a <= '7' && b <= '8' && c <= '9')
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
