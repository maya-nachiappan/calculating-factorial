//
//  CIS25 - assignment 12
//
//  Created by maya nachiappan on 9/18/24.
//
// a program that prints the factorial of a positive number

#include <iostream>
using namespace std;

int main()
{
    // initializing variables
    unsigned long long fact=1.0;
    int num;
    
    cout << "Enter a positive number: " << endl;
    cin >> num;
    
    if (num<0) // checks if number entered is less than 0
    {
        cout << "That is not a positive number, please try again." << endl;
        return 1;
    }
    
    else{
        for (int i=1; i<=num; i++) // exectutes for loop to multiply each number in factorial
        {
            // formula for factorials
            fact*= i;
        }
        
        cout << "The factorial of "<< num <<  " is " << fact << endl; // prints factorial
    }
    return 0;
}
