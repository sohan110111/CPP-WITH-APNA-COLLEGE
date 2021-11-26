#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Please enter number1 : ";
    cin >> number1;

    cout << "Please enter number2 : ";
    cin >> number2;

    int sum = number1 + number2;
    int subtraction = number1 - number2;
    int multiplication = number1 * number2;
    int division = number1 / number2;
    int increment = number1++;
    int decrement = number2--;
    int module = number1 % number2;

    cout << "Sum = " << sum << "; Subtraction : " << subtraction << "; Multiplication : " << multiplication << "; Division : " << division << "; Increment : " << increment << "; Decrement : "<< decrement << "; Reminder : " << module;

    return 0;
}