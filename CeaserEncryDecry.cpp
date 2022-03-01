#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string encryptString(string &str, int key, int encrypt)
{

    string returnStr = "";
    int charcode = 0;
    char letter;

    if (encrypt)
        key = key * -1;

    for (auto &&c : str)
    {
        if (isalpha(c))
        {
            charcode = (int)c;
            charcode = charcode + key;

            if (isupper(c))
            {
                if (charcode > (int)'Z')
                    charcode -= 26;

                else if (charcode < (int)'A')
                    charcode += 26;
            }
            else
            {
                if (charcode > (int)'z')
                    charcode -= 26;

                else if (charcode < (int)'a')
                    charcode += 26;
            }
            letter = charcode;
            returnStr += letter;
        }
        else
        {
            letter = c;
            returnStr += letter;
        }
    }

    return returnStr;
}

int main(void)
{
    string str = "make a secret";

    string encstr = encryptString(str, 5, 1);

    cout << "string:  " << str << endl;
    cout << "encryted string:  " << encstr << endl;
    cout << "dencryted string:  " << encryptString(encstr, 5, 0) << endl;

    return 0;
}