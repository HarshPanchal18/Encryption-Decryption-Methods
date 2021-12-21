#include <stdio.h>

char arr[26][26];
char message[22], key[22], emessage[22], retmessage[22];

int Findrow(char c)
{
    for (int i = 0; i < 26; i++)
        if (arr[0][i] == c)
            return (i);
}

int FindCol(char c)
{
    for (int i = 0; i < 26; i++)
        if (arr[i][0] == c)
            return (i);
}

int FindDecRow(char c, int j)
{
    for (int i = 0; i < 26; i++)
        if (arr[i][j] == c)
            return (i);
}

int main(void)
{
    int i = 0, j, k = 96, r, c;
    for (i = 0; i < 26; i++)
    {
        k++;
        for (j = 0; j < 26; j++)
        {
            arr[i][j] = k++;
            if (k == 123)
                k = 97;
        }
    }
    printf("\nEnter a message: ");
    gets(message);

    printf("\nEnter the key: ");
    gets(key);

    // Encryption
    for (i = 0; key[i] != '\0'; i++)
    {
        c = Findrow(key[i]);
        r = FindCol(message[i]);
        emessage[i] = arr[r][c];
    }
    emessage[i] = '\0';

    printf("\nEncrypted message\n");
    for (i = 0; emessage[i] != '\0'; i++)
        printf("%c", emessage[i]);

    // Decryption
    for (i = 0; key[i] != '\0'; i++)
    {
        c = FindCol(key[i]);
        r = FindDecRow(emessage[i], c);
        retmessage[i] = arr[r][0];
    }
    retmessage[i] = '\0';

    printf("\nMessage retrieved is\n");
    for (i = 0; retmessage[i] != '\0'; i++)
        printf("%c", retmessage[i]);

    //    It prints accurately when the length of the message & key length is equal
}