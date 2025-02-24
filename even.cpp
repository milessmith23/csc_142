#include <iostream>



bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    std::srand(std::time(0)); 
    int evenCount = 0, oddCount = 0;
    int totalNumbers = 1000;
    
    for (int i = 0; i < 1000; ++i) {
        int num = std::rand() % 101; 
        if (isEven(num)) evenCount++;
        else oddCount++;
    }


   
    std::cout << "Total numbers: 1000\n";
    std::cout << "Even numbers: " << evenCount << "\n";
    std::cout << "Odd numbers: " << oddCount << "\n";

    return 0;
}