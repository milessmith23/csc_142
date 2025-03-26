// Miles Smith
// 2/3/25
// This program is going to ask you for a description of what you purchased and ask for the exact amount the purchase is and will calculate the cost with tax

#include <iostream>
#include <string>
#include <iomanip>  
using namespace std;

int main() {
    const double TAX_RATE = 0.06;
    bool keepGoing = true;  

    while(keepGoing) {
        string purchaseInfo;
        string costString;
        string userChoice;
        double purchaseCost;

        
        cout << "Enter a description of the purchase: ";
        getline(cin, purchaseInfo);

        
        do {
            cout << "Enter the exact cost of the purchase: ";
            getline(cin, costString);

            
            purchaseCost = stod(costString);

            if (purchaseCost < 0) {
                cout << "Error! The cost you entered is negative, so please enter a valid cost." << endl;
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
        getline(cin, userChoice);

       
        if (userChoice == "No") {
            keepGoing = false;  
        }
        cout << endl;  
    }

    
    return 0;
}

