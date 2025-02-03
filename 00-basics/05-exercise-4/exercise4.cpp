#include <iostream>

using namespace std;

const float startPrice = 10.20;
const float pricePerKm = 1.30;
const float pricePerBag = 2.00;

void main(){
    int km, bagAmount;
    float totalPrice;
    cout << "How many bags do you have? ";
    cin >> bagAmount;
    cout << "How many KM was the ride? ";
    cin >> km;
    totalPrice = startPrice + (km * pricePerKm) + (bagAmount * pricePerBag);
    cout << "\nTotal price to pay: " << totalPrice << endl;
}