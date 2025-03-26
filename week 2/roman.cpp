// Miles Smith
// 1/30/25
// This program will turn the integer given into its roman numeral.
//roman.cpp

#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter an integer between 1 and 10: ";
        cin >> num;

        if (num < 1 || num > 10) {
            cout << "Error! The number must be between 1 and 10. Try again." << endl;
        }

    } while (num < 1 || num > 10);  
    string romannum;

    if (num == 1) {
        romannum = "I";
    }
    else if (num == 2) {
        romannum = "II";
    }
    else if (num == 3) {
        romannum = "III";
    }
    else if (num == 4) {
        romannum = "IV";
    }
    else if (num == 5) {
        romannum = "V";
    }
    else if (num == 6) {
        romannum = "VI";
    }
    else if (num == 7) {
        romannum = "VII";
    }
    else if (num == 8) {
        romannum = "VIII";
    }
    else if (num == 9) {
        romannum = "IX";
    }
    else if (num == 10) {
        romannum = "X";
    }

    cout << "The Roman numeral for " << num << " is " << romannum << endl;

    return 0;
}
