// Author: Carlos Eduardo Rodrigues Dos Santos

#include<iostream>
#include<string>
using namespace std;

 /*     1 - varrer a string s, caractere por caractere
        2 - Atribuir um valor para cada caractere
        3 - Considerar a ordem dos caracteres
        4 - Fazer a soma dos valores,considerando a ordem
*/


// convert roman to int using switch case
int main()
{
    string roman;
    int num = 0;
    cout << "Enter a roman number: ";
    cin >> roman;

    int stringSize = roman.size();

    for (int i = 0; i < stringSize; i++)
    {
        switch (roman[i])
        {
        case 'I':
            if (roman[i + 1] == 'V')
            {
                num += 4;
                i++;
            }
            else if (roman[i + 1] == 'X')
            {
                num += 9;
                i++;
            }
            else
            {
                num += 1;
            }
            break;
        case 'V':
            num += 5;
            break;
        case 'X':
            if (roman[i + 1] == 'L')
            {
                num += 40;
                i++;
            }
            else if (roman[i + 1] == 'C')
            {
                num += 90;
                i++;
            }
            else
            {
                num += 10;
            }
            break;
        case 'L':
            num += 50;
            break;
        case 'C':
            if (roman[i + 1] == 'D')
            {
                num += 400;
                i++;
            }
            else if (roman[i + 1] == 'M')
            {
                num += 900;
                i++;
            }
            else
            {
                num += 100;
            }
            break;
        case 'D':
            num += 500;
            break;
        case 'M':
            num += 1000;
            break;
        default:
            cout << "Invalid roman number";
            break;
        }
    }
    cout << "The integer value of " << roman << " is " << num;
    return 0;
}