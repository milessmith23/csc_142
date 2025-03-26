#include <iostream>

using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


double factorial(int num) {
    double fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    srand(time(0));  
    char repeat;

    do {
        int num = rand() % 50;  
        cout << "The random generated number is: " << num << endl;

        if (isPrime(num)) {
            cout << "This is a prime number. The factorial of " << num << " is " << factorial(num) << endl;
        } else {
            cout << "This is not prime." << endl;
        }

        cout << "Do you want to repeat? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "See ya!" << endl;
    return 0;
}
