#include <iostream>

using namespace std;

const int floorDelay = 5;
const int floorToFloorTime = 3;

void main(){
    int currentFloor, destinationFloor, totalTime;
    cout << "Enter your current floor number: ";
    cin >> currentFloor;
    cout << "Enter your destination floor number: ";
    cin >> destinationFloor;
    totalTime = (destinationFloor - currentFloor) * floorToFloorTime;
    cout << "\nIt will take " << totalTime << " seconds for the elevator to reach the " << destinationFloor << " floor";
}