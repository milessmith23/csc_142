// SpeedTrap.cpp
// Miles Smith
// 1/30/25
// This program will ask what the speed limit is, and then to enter your speed to see if you are driving legally within the speed limit or not

#include <iostream>

using namespace std;

int main() {
    
    int speedLimit;
    double driverSpeed;
    
    
    cout << "Enter the speed limit: ";
    cin >> speedLimit;
    
    
    cout << "Enter the driver's speed: ";
    cin >> driverSpeed;
    
   
    if (driverSpeed <= speedLimit) {
        cout << "The speed is legal." << endl;
    } else {
        cout << "You are speeding! You will receive a ticket." << endl;
    }

    return 0;
}
