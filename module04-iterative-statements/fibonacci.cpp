/*
Fibonacci number is a series of numbers in which each number is the sum of the two preceding numbers. The first two numbers in the series are the number 1.  Write a program to print first n Fibonacci Numbers

For example, one execution would look like this:
Please enter a positive integer greater than 1: 4
1
1
2
3

File Name 

fibonacci.cpp
*/

#include <iostream>

using namespace std;

int main(int argz, char * argv[])
{
    int n, t1 = 1, t2 = 1, nextTerm = 0;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 <<endl;
            continue;
        }
        if(i == 2) {
            cout << t2 <<endl;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm <<endl;
    }
    return 0;
}
