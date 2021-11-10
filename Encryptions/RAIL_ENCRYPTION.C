/*
Rail Fence Cipher

Enter message:- You're going to encrypt
Rails:- 3
o/p:- Yro eyo'egigt nrpu noct
   Y   r   o       e   y
    o ' e g i g t   n r p
 	 u       n   o   c   t

Encryption Pattern: 
(Rails=3)

	  \    /\    /\    /
	   \  /  \  /  \  /
	    \/    \/    \/
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void)
{
	int i, j, len, rails, count, code[10][100];
	char str[30];
	printf("\nEnter message:\n");
	gets(str);
	len = strlen(str);

	printf("\nEnter number of rails\n");
	scanf("%d", &rails);

	for (i = 0; i < rails; i++)
	{
		for (j = 0; j < len; j++)
		{
			code[i][j] = 0;
		}
	}

	count = 0;
	j = 0;

	while (j < len)
	{
		if (count % 2 == 0)
		{
			for (i = 0; i < rails; i++)
			{
				code[i][j] = (int)str[j];
				j++;
			}
		}
		else
		{
			for (i = rails - 2; i > 0; i--)
			{
				code[i][j] = (int)str[j];
				j++;
			}
		}
		count++;
	}

	for (i = 0; i < rails; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (code[i][j] != 0)
				printf("%c", code[i][j]);
		}
	}
	printf("\n");
}