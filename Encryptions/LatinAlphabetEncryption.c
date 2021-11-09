#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char str[20];
rpt:
    printf("\nEnter Sentence: ");
    gets(str);
    i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 0 && str[i] <= 31) || (str[i] >= 33 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122 && str[i] <= 127))
        {
            printf("Enter Alphabets and space only..\n");
            goto rpt;
        }
        i++;
    }
    i = 0;
    printf("\nEncrypted Code using Latin Alphabets\n");
    while (str[i] != '\0')
    {
        if (!((str[i] >= 0 && str[i] <= 31) || (str[i] >= 33 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122 && str[i] <= 127)))
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                printf("%d ", str[i] - 'A' + 1);
            if (str[i] >= 'a' && str[i] <= 'z')
                printf("%d ", str[i] - 'a' + 1);
        }
        if (str[i] == ' ')
            printf("%c", str[i]);
        i++;
    }
    printf("\n\n");
}