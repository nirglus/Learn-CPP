#include <iostream>

using namespace std;

void main(){
    char a,b,c;
    cout << "\nEnter first digit:";
    cout << "A: " << a;
    cout << "\nEnter second digit:";
    cout << "B: " << b;
    cout << "\nEnter last digit: ";
    cout << "C: " << c;
    int num = (a - '0') * 100 + (b -'0') * 10 + (c-'0');
    cout << "\nThe number is " << num << endl;
}