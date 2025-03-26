#include <iostream>
#include "rectangle.h"

int main() {
    
    Rectangle kitchen, bedroom, livingRoom;

    
    double length, width;

    
    std::cout << "Enter the length of the kitchen: ";
    std::cin >> length;
    std::cout << "Enter the width of the kitchen: ";
    std::cin >> width;
    kitchen.setLength(length);
    kitchen.setWidth(width);

    
    std::cout << "Enter the length of the bedroom: ";
    std::cin >> length;
    std::cout << "Enter the width of the bedroom: ";
    std::cin >> width;
    bedroom.setLength(length);
    bedroom.setWidth(width);

    
    std::cout << "Enter the length of the living room: ";
    std::cin >> length;
    std::cout << "Enter the width of the living room: ";
    std::cin >> width;
    livingRoom.setLength(length);
    livingRoom.setWidth(width);

    
    std::cout << "\nKitchen dimensions: " << kitchen.getLength() << " x " << kitchen.getWidth()
              << " | Area: " << kitchen.getArea() << " sq units\n";
    std::cout << "Bedroom dimensions: " << bedroom.getLength() << " x " << bedroom.getWidth()
              << " | Area: " << bedroom.getArea() << " sq units\n";
    std::cout << "Living Room dimensions: " << livingRoom.getLength() << " x " << livingRoom.getWidth()
              << " | Area: " << livingRoom.getArea() << " sq units\n";

    
    double totalArea = kitchen.getArea() + bedroom.getArea() + livingRoom.getArea();
    std::cout << "\nTotal area of the apartment: " << totalArea << " sq units\n";

    return 0;
}
