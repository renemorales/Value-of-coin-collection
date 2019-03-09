//Write a simple C++ Program that converts the number of quarters,
//nickels, dimes, dollars into pennies.

//header file section
#include <iostream>
using namespace std;

//declare variables

string name; // user first name
int pennies; // count of pennies
int dimes;   // count of dimes
int nickels; // count of nickels
int quarters; // count of quarters
int dollars; // count of dollars
int totalDollars; // values of coins in dollars
int totalCents; // total cents
int change; // values of coin in cents

int main()
{
    cout << "Please can you enter your First Name: "; // prompt the user first name
    getline(cin,name);

    cout << "Please enter the number of dollars: "; // prompt the number of dollar
    cin >> dollars;

    cout << "Please enter the nummber of quarters: "; // prompt the number of quarters
    cin >> quarters;

    cout << "Please enter the number of dimes: "; // prompt the number of dimes
    cin >> dimes;

    cout << "Please enter the number of nickels: "; // prompt the number of nickels
    cin >> nickels;

    cout << "Please enter the number of pennies: ";  // prompt the number of  pennies
    cin >> pennies;

    // compute the total dollars in cents

    totalCents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickels + pennies;

    // find the value in dollars

    totalDollars = totalCents / 100;

    // find the value in change

    change = totalCents % 100;

    cout << endl;
    cout << "Coin Credit: " << name << endl; // display the name of the user
    cout << "Dollars: " << totalDollars << endl;  // display the value in dollars
    cout << "Cents: " << change << endl; // display the value in cents

    system ("pause"); // pause the system for a while
    return 0;
}