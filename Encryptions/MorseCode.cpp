#include <iostream>
#include <bits/stdc++.h> // for transform()

using namespace std;

const string morseLetters[37] = {"    ", ". ___", "___ . . .", "___ . ___ .", "___ . .", ".", ". . ___ .", "___ ___ .", ". . . .", ". .", ". ___ ___ ___", "___ . ___", ". ___ . .", "___ ___", "___ .", "___ ___ ___", ". ___ ___ .", "___ ___ . ___", ". ___ .", ". . .", "_", ". . ___", ". . . ___", ". ___ ___", "___ . . ___", "___ . ___ ___", "___ ___ . .", ". ___ ___ ___ ___", ". . ___ ___ ___", ". . . ___ ___", ". . . . ___", ". . . . .", "___ . . . .", "___ ___ . . .", "___ ___ ___ . .", "___ ___ ___ ___ .", "___ ___ ___ ___ ___"};
const char letters[37] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

string textToChange = "";
string newText = "";

int main(void)
{
    textToChange = "Kenneth Marvin";
    cout << textToChange << endl;

    transform(textToChange.begin(), textToChange.end(), textToChange.begin(), ::tolower);
    cout << "Converted to lowercase: " << textToChange << endl;

    for (int i = 0; i < textToChange.size(); i++)
    {
        for (int j = 0; j < 37; j++)
        {
            if (textToChange[i] == letters[j])
            {
                newText = newText + morseLetters[j];
                newText = newText + " ";
                break;
            }
        }
    }
    cout << "MorseCode: " << newText << endl;
}
