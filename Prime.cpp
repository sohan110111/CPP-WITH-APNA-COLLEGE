#include <iostream>
using namespace std;

int main() {
    int number; 
    
    cout << "Please enter a number tow is greater than or equal : ";
    cin >> number ;

    // A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. A natural number greater than 1 that is not prime is called a composite number. For example, 5 is prime because the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself.
    
    // Here check single prime number .....
    int i;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "This number is not prime." << endl;
            break;
        }
            
    } 

    if (i == number) {
        cout << "Prime" << endl;
    }

    //Now check between two numbers

    int a, b;

    cout << "Please input two number of for check all prime number between two numbers : ";
    cin >> a >> b;

    while (a <= b)
    {
        int i;
        for (i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                break;
            }
                
        } 
 
        if (i == a) {
            cout << a << endl;
        }

        a++; 
    }
    
    

    return 0;
}