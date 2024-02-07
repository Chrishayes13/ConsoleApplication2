
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    double currentSalary, percentagePay;
    string lastName, firstName;

    inFile.open("SalaryData.txt");
    outFile.open("SalaryData.txt");

    outFile << fixed << showpoint;
    outFile << setprecision(2);


    inFile >> lastName >> firstName >> currentSalary >> percentagePay;
    outFile << "firstName lastName updatedSalary" << endl;
    outFile << firstName << "\t " << lastName << "\t " << currentSalary + (currentSalary * (percentagePay / 100)) << endl;
    inFile >> lastName >> firstName >> currentSalary >> percentagePay;
    outFile << firstName << "\t " << lastName << "\t " << currentSalary + (currentSalary * (percentagePay / 100)) << endl;
    inFile >> lastName >> firstName >> currentSalary >> percentagePay;
    outFile << firstName << "\t " << lastName << " \t" << currentSalary + (currentSalary * (percentagePay / 100)) << endl;

    inFile.close();
    outFile.close();

    system("pause");
    return 0;
}