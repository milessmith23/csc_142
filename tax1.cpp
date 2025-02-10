#include <iostream>
#include <string>
#include <iomanip>  
using namespace std;

int main() {
    const double TAX_RATE = 0.06;
    bool keepGoing = true;  

    while (keepGoing) {
        string purchaseInfo;
        string costString;
        string userChoice;
        double purchaseCost;

       
        cout << "Enter a description of the purchase: ";
        getline(cin, purchaseInfo);

        do {
           
            cout << "Enter the exact cost of the purchase: ";
            getline(cin, costString);

            try {
                purchaseCost = stod(costString);  
                if (purchaseCost < 0) {
                    cout << "Error! The cost you entered is negative, so please enter a valid cost." << endl;
                }
            } catch (invalid_argument& e) {  
                cout << "Error! Please enter a valid numeric value for the cost." << endl; 
            }
        } while (purchaseCost < 0);  
        double salesTax = purchaseCost * TAX_RATE;
        double totalAmount = purchaseCost + salesTax;

       
        cout << fixed << setprecision(2);  
        cout << "\nPurchase Description: " << purchaseInfo << endl;
        cout << "Purchase Cost: $" << purchaseCost << endl;
        cout << "Sales Tax (6%): $" << salesTax << endl;
        cout << "Total Amount: $" << totalAmount << endl;

        cout << "\nWould you like to enter another purchase? (Yes/No): ";
        
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        getline(cin, userChoice);

        if (userChoice == "No") {
            keepGoing = false;  
        }
        cout << endl;  
    }

    return 0;
}
