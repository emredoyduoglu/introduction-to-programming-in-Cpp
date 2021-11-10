/*
Write a program that asks the user to enter a number of quarters, dimes, nickels and pennies and then outputs the monetary value of the coins in the format of dollars and remaining cents.


Your program should interact with the user exactly as it shows in the following example:

Please enter the number of coins:<br>
# of quarters: 20
# of dimes: 4
# of nickels: 13
# of pennies: 17
The total is 6 dollars and 22 cents

File Name 

counter.cpp
*/

#include <iostream>

using namespace std;

int main()
{
	int quarters,dimes,nickels,pennies;
    int money;
	int dollars;
	int cents;
	
	cout<<"Please enter the number of coins: "<<endl;
	cout<<"# of quarters: ";
	cin>>quarters;
	cout<<"# of dimes: ";
	cin>>dimes;
	cout<<"# of nickels: ";
	cin>>nickels;
	cout<<"# of pennies: ";
	cin>>pennies;
	
	money = pennies + (5*nickels)+ (10*dimes)+(25*quarters);
	dollars = money /100;
	cents = money%100;
	
	cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;
    return 0;
}
