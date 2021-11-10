/*
Write a program that inputs four numbers separated by spaces.  The program should count how many odd and even numbers there are. The program should then output one of three possibilities depending on how many even and odd numbers are entered:

1. more evens
2. more odds
3. same number of evens and odds

For example, an execution could look like this:

Please enter 4 positive integers, separated by a space: 
2 3 5 7
more odds

File Name 

countoddeven.cpp
*/

#include <iostream>

using namespace std;

int main()
{
    int number1, number2, number3, number4, even=0, odd=0; 
    cout << "Please enter 4 positive integers, separated by a space: "; 
    cin >> number1>>number2>>number3>>number4;
    
    if (number1 % 2 == 0)
        even++;
    else
        odd++;    
    
    if (number2 % 2 == 0)
        even++;
    else
        odd++;
        
    if (number3 % 2 == 0)
        even++;
    else
        odd++;
        
    if (number4 % 2 == 0)
        even++;
    else
        odd++;
        
    if( even > odd )
        cout<<"more evens"<<endl;
    else if( even < odd )
        cout<<"more odds"<<endl;
    else
        cout<<"same number of evens and odds"<<endl;
    return 0;
}
