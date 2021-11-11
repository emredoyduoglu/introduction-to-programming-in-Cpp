/*
Write a program that asks the user to enter an amount of money in the format of dollars and remaining cents. The program should calculate and print the minimum number of coins (quarters, dimes, nickels and pennies) that    are equivalent to the given amount.

Hint: In order to find the minimum number of coins, first find the maximum number of quarters that fit in the given amount of money, then find the maximum number of dimes that fit in the remaining amount, and so on.

File Name 

coins.cpp

Score

There are five tests each worth 2 points

For example, an execution should look like  this:
Please enter the amount of money to convert:

# of dollars: 2
# of cents: 37
The coins are 9 quarters, 1 dimes, 0 nickels and 2 pennies
*/
#include <iostream>

using namespace std;

int main()
{
	int quarters,dimes,nickels,pennies;
    	int money;
	int dollars;
	int cents;
	
	cout<<"Please enter the amount of money to convert:"<<endl;
	cout<<"# of dollars: ";
	cin>>dollars;
	cout<<"# of cents: ";
	cin>>cents;
	
	
	money = dollars*100 + cents;
	quarters = money / 25;
	money %=25;
	dimes = money / 10;
	money %=10;
	nickels = money / 5;
	pennies = money % 5;
	
	
	cout<<"The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies"<<endl;
    	return 0;
}
