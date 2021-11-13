#include <iostream>
using namespace std;

int main() {
    int a, b, c;
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
    

    return 0;
    
}
