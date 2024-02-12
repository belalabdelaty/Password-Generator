#include <bits/stdc++.h>
using namespace std;


int main()
{
    char Answer;
    const char RandomeChars[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int string_length = sizeof(RandomeChars) - 1;
   // int string_length = RandomeChars.length() - 1;


    do {
        int LengthOfPass;
        cout << "Enter the length of password :   ";
        cin >> LengthOfPass;
        srand(time(0));
        cout << "Generated password :   ";
        for (int i = 0; i < LengthOfPass; i++)
            cout << RandomeChars[rand() % string_length];
        cout << "\n Do you want to generate another password?\n [y/n]  : ";
        cin >> Answer;
        getchar();
        system("cls");

    } while (Answer == 'y');

        cout << "GOOD BYE :]";
    return 0;

}

