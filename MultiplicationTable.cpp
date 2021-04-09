//Write a program to produce an addition/multiplication table as follows:
/* 1. Multiplication Table for 5
   2. Multiplication Table for 10
   3. Addition Table for 2
   4. Addition Table for 15
   5. Exit
*/

#include <iostream>
using namespace std;

int main()
{
    //Declaring Variables
    int choice = 0, i;

    //User Choice
    start:
    while (choice > 5 || choice < 1) {
        cout << "Please enter the Number Value of the function you would like to perform.\n\n";
        cout << "1.\tMultiplication Table for 5\n";
        cout << "2.\tMultiplication Table for 10\n";
        cout << "3.\tAddition Table for 2\n";
        cout << "4.\tAddition Table for 15\n";
        cout << "5.\tExit\n";
        cout << "\nEnter a value:\t";
        cin >> choice;
    }

    switch (choice) {
    case 1:
        cout << "\nMULTIPLICATION TABLE FOR 5\n\n";
        for (i = 0; i <= 10; i++) {
            cout << "5 * " << i << " = " << 5 * i << endl;
        }
        break;
    case 2:
        cout << "\nMULTIPLICATION TABLE FOR 10\n\n";
        for (i = 0; i <= 10; i++) {
            cout << "10 * " << i << " = " << 10 * i << endl;
        }
        break;
    case 3:
        cout << "\nADDITION TABLE FOR 2\n\n";
        for (i = 0; i <= 10; i++) {
            cout << "2 + " << i << " = " << 2 + i << endl;
        }
        break;
    case 4:
        cout << "\nADDITION TABLE FOR 15\n\n";
        for (i = 0; i <= 10; i++) {
            cout << "15 + " << i << " = " << 15 + i << endl;
        }
        break;
    case 5:
        cout << "\nGoodbye!";
        return 0;
    }

    choice = 0;
    cout << "\n\n";
    goto start;
}