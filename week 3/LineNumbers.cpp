#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string inputFileName, outputFileName;

    
    cout << "Enter the name of the input file: ";
    getline(cin, inputFileName);
    
    cout << "Enter the name of the output file: ";
    getline(cin, outputFileName);

   
    ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the input file!" << endl;
        return 1; 
    }

    
    ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) {
        cout << "Error: Unable to open the output file!" << endl;
        return 1; 
    }

    string line;
    int lineNumber = 1;

    while (getline(inputFile, line)) {
        outputFile << setw(5) << right << lineNumber << ". " << line << endl;
        lineNumber++; 
    }

    inputFile.close();
    outputFile.close();

    cout << "The text has been numbered and written to " << outputFileName << endl;

    return 0;
}
