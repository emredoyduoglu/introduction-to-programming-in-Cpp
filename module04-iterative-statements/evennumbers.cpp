/*
Write a program that reads a positive integer n, and prints the first n even numbers.

For example, one execution would look like this:
Please enter a positive integer: 3
2
4
6

File Name 

evennumbers.cpp
*/

#include <iostream>

using namespace std;

int main(int argz, char * argv[])
{
    int n;
    int counter = 2;
    cout<<"Please enter a positive integer: ";
    cin>>n;
    for(int i =0; i<n ; i++)
    {
        cout<<counter<<endl;
        counter +=2;
    }
    return 0;
}
