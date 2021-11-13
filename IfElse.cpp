#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Please input a number for if_else statement : ";

    cin >> a >> b >> c;

    // Maximum Number Check
    
    if (a > b) {
        if (a > c) {
            cout << a << endl;
        }
    } else if (b > c) 
    {
        if (b > a)
        {
            cout << b << endl;
        }
    
    } else {
        cout << c << endl;
    }
    

// while loop

int w;

cout << "Please input a number for while loop : ";
cin >> w ;

while (w > 0) {
    cout << w << endl;
    cout << "If you input Negative number it will be terminate : ";
    cin >> w ;
}


// do .... while
int d; 
cout << "Please input a number for do_while loop : ";
cin >> d; 

do
{
    cout << d << endl;

    cout << "If you input Negative number it will be terminate : ";
    cin >> d;
} while (d > 0);


    return 0;
    
}



