#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k, len, turns, code[10][10], col;
	char str[20];
	printf("\nEnter a message:- ");
	gets(str);
	len = strlen(str);
	printf("\nEnter numbers of turn in band\n");
	scanf("%d", &turns);
	k = 0;

	for (i = 0; i < len;)
	{
		for (j = 0; j < turns; j++)
		{
			code[k][j] = 0;
			i++;
		}
		k++;
	}
	k = 0;

	for (i = 0; i < len;)
	{
		if (str[i] != ' ')
		{
			for (j = 0; j < turns;)
			{
				if (i <= len)
				{
					if (str[i] != ' ')
					{
						code[k][j] = (int)str[i];
						i++;
						j++;
					}
					else
						i++;
				}
				else
					break;
			}
			k++;
		}
		else
			i++;
	}

	printf("\nEncrypted message:-\n");
	col = k;

	for (i = 0; i < turns; i++)
		for (j = 0; j < col; j++)
			if (code[j][i] != 0)
				printf("%c", code[j][i]);

	printf("\n");
}
