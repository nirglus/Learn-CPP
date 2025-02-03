#include <iostream>

using namespace std;

void main(){
    int birthYear, id, height;
    char gender;
    cout << "Enter your birth year:";
    cin >> birthYear;
    cout << "Enter your ID:";
    cin >> id;
    cout << "Enter your height in CM:";
    cin >> height;
    cout << "Enter your gender (M/F):";
    cin >> gender;
    cout << "Thank you! Here are your details:\n";
    cout << "ID: " << id << "\nAge: " << 2025 - birthYear << "\nGender: " << gender << endl; 
}