// Miles Smith
// 1/29/25
// This file asks what your name is and to put in your test scores and it will find the average of your three test score.
// Exams.cpp

 

#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    string name;
    int score1, score2, score3;
    
    cout << "What is your name ? ";
    getline(cin, name); 
    
    
    cout << "Enter your first exam: ";
    cin >> score1;
    cout << "Enter your second exam: ";
    cin >>score2;
    cout << "Enter your third exam: ";
    cin >> score3;
   
    double average = (score1 + score2 + score3) / 3.0; 
    
    
    cout << "" <<endl;
    cout << "Hello," << name << endl;
    cout << "Your 3 exams scores are: " << score1 << ", " << score2 << ", " << score3 << endl;
    
   cout << "Your average exam score is " << fixed << setprecision(2) << average << " points." << endl;

    

    return 0;
}

