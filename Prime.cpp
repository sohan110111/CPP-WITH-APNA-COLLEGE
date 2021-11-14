#include <iostream>
using namespace std;

int main() {
    int number; 
    
    cout << "Please enter a number tow is greater than or equal : ";
    cin >> number ;

    // A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. A natural number greater than 1 that is not prime is called a composite number. For example, 5 is prime because the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself.

    if (number == 2) {
        cout << "This number is prime.";
    } else {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                cout << "This number is not prime.";
                break;
            }else {
                cout << "This number is prime.";
                break;
            }
            
        }
        
    }

    return 0;

}