#include <iostream>
using namespace std;

int main() {
    cout << "Please call a switch(1, 2, 3, 4) : " << endl;

    int Switch;
    cin >> Switch;

    switch (Switch)
    {
    case 1:
        cout << "Light ON" << endl;
        break;

    case 2:
        cout << "Fan ON" << endl;
        break;

    case 3:
        cout << "TV ON" << endl;
        break;

    case 4:
        cout << "Play sound box" << endl;
        break;            
    
    default:
        cout << "Your are in dark.";
        break;
    }


    // addition, multiplication, division, subtitution

    cout << "Plese input two number : ";

    int number1, number2;
    cin >> number1 >> number2;

    cout << "Please input symbol addition(+), multiplication(*), division(/), subtitution(-): " << endl;

    char Symbol;
    cin >> Symbol;

    switch (Symbol)
    {
    case '+':
        cout << number1 + number2 << endl;
        break;

    case '-':
        cout << number1 - number2  << endl;
        break;

    case '*':
        cout << number1 * number2  << endl;
        break;

    case '/':
        cout << number1 / number2  << endl;
        break;        
    
    case '%':
        cout << number1 % number2  << endl;
        break; 

    default:
        cout << "Plese input right symbol";
        break;
    }

    return 0;

}