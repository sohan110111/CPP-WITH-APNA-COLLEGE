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



    // continue statement skip to the next iteration of the loop
    // break statement terminate the loop

    int pocketMoney = 3000;
    for (int date = 1; date <= 30; date++) {
        if (date % 2 == 0)
        {
            continue;
        }
        if (pocketMoney == 0) {
            break;
        }
        cout << "Got out today ! " << endl;
        pocketMoney = pocketMoney - 300;
    }


    for (int count = 1; count <= 100; count++) {
        if (count % 3 == 0) {
            continue;
        }

        cout << "Now print 1 to 100 not divisible by 3: " << count << endl;
    }
    
    return 0;
    
}



