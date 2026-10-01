/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::     */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mwong <mwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:39:57 by mwong             #+#    #+#             */
/*   Updated: 2026/06/17 11:44:47 by mwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
____EXERSIZE_____

This exersizee is Atoi or (Ascii to integer).
Which wants us to convert characters into ints.
So we can use ascii to convert it.


____ATOI____

First we have to make a result and sign.
Sign is basically the '-' or '+' sign which will tell us
if the number should be positive or negative.

_____First WHILE_____

First we have to check if the iterators position is 
a space, 9 or 13 on the ascii table.
9 and 13 are not printable, so if someone puts it in the 
string that we want to convert into ints and it is
within 9-13 which are unprintable. 
The program will skip it 
buy going 'i++' which just iterates though the string.

____Second WHILE____

The second while is for the sign.
First the program checks if the string 
has a '-' then it will mulitply the evalues by
sign = sign * -1;

So if you were to do '-1 * -1' you would get '1'.
Then we are using i++ to iterate though the string after
it does the convesion.

_____Third WHILE_____

This third while is for checking if the string
is within '0' and '9' which are the characters
0 and 9.

Then it  wil convert.
Now the conversion is abit confusing.

res = res * 10 + (str[i] - '0');
which then converts the character to number, since
it subtracts the asci value of '0' or 48 from
the character thus turning it into a int.
*/

int	atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
int	main(void) 
{
	char	str[] = "+-231";
	int	val = atoi(str);
	printf("%d", val);
	return (0);
}
*/
