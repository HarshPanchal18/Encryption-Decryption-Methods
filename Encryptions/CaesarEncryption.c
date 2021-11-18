#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0, no;
    char str[20], str1[20];
    printf("\nEnter sentence: ");
    gets(str);

    printf("\nEnter the number to change the order: ");
    scanf("%d", &no);

    printf("\nEncrypted:\n");

    while (str[i] != '\0')
    {
        if (!((str[i] >= 0 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122 && str[i] <= 127)))
        {
            if ((str[i] > 'a' + no + 1) && (str[i] <= 'z'))
                printf("%c", str[i] - no - 2);
            else if ((str[i] > 'A' + no + 1) && (str[i] <= 'Z'))
                printf("%c", str[i] - no - 2);
            else
                printf("%c", str[i] + 24 - no);
        }
        if (((str[i] >= 0 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122 && str[i] <= 127)))
            printf("%c", str[i]);
        i++;
    }
    printf("\n");
}