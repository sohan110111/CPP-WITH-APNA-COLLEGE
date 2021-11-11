#include <iostream>
using namespace std;

int main() {
    int i; // variable
    i = 12; // variable diclaration
 
    cout << "size of integer " << sizeof(12) << endl;

    float f; 
    cout << "size of integer " << sizeof(f) << endl;

    char c; 
    cout << "size of integer  " << sizeof(c) << endl;

    bool b; 
    cout << "size of integer " << sizeof(b) << endl;

    short int si;
    long int li;
    
    cout <<" size of short int "<< sizeof(si) << endl;
    cout <<" size of short int "<< sizeof(li) << endl;

    return 0;
}