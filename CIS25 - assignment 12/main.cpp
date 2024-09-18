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
    unsigned long long fact=1;
    int num;
    
    cout << "enter a positive number: " << endl;
    cin >> num;
    
    if (num<0)
    {
        cout << "that is not a positive number" << endl;
        return 1;
    }
    
    for (int i=1; i<=num; ++i)
    {
        fact*= i;
    }
    
    cout << "the factorial of the number is: " << fact << endl;
    return 0;
}
