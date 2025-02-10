// Miles Smith
// 1/24/25
// This program will calculate the gas mileage you have driven in your car.
// gasmileage.cpp

#include <iostream>

int main() {   
    
    const double KM_PER_MILE = 1.60934;      
    const double LITERS_PER_GALLON = 3.78541; 
    
    
    std::string desc;
    int miles;
    float gallons;      
    float mpg;
    float liters;
    float km_per_liter;
    float kilometers;

    
    std::cout << "Enter a description of your car: ";
    std::getline(std::cin, desc);

    std::cout << "How many miles have you traveled? ";
    std::cin >> miles;

    std::cout << "How many gallons of gas did you use? ";
    std::cin >> gallons;

    kilometers = miles * KM_PER_MILE;
    liters = gallons * LITERS_PER_GALLON;
    mpg = miles / gallons;
    km_per_liter = kilometers / liters;       
    
   std::cout<<"\n";
    std::cout<<"Fuel efficiency of your " + desc + ":"<<std::endl;
    std::cout<<"You drove " <<miles<< " miles and used " <<gallons<< " gallons."<<std::endl;
    std::cout<<"Your fuel efficiency is " << mpg << " miles per gallon."<<std::endl; 
    

    std::cout<<"\n";
    std::cout<<"Fuel efficiency of your " + desc + ":"<<std::endl;
    std::cout<<"You drove " << kilometers << " kilometers and used " << liters << " liters."<<std::endl; 
    std::cout << "Your fuel efficiency is " << km_per_liter << " kilometers per liter.\n";
    return 0;
}
