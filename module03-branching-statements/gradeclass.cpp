/*
Write a program that inputs two grades separated by a space.  

If both grades are below a score of sixty then the program should output the message:

Student Failed:(

If both grades are greater than or equal to ninety five then the program should output the message:

Student Graduated with Honors:)

Otherwise the program should output the message:

Student Graduated!



For example, an execution could look like this:


Please enter 2 grades, separated by a space: 59 95

Student Graduated!

File Name 

gradeclass.cpp
*/
#include <iostream>

using namespace std;

int main()
{
    double grade1, grade2, final; 
    cout << "Please enter 2 grades, separated by a space: "; 
    cin >> grade1>>grade2; 
    
    if( (grade1<60) && (grade2<60))
        cout<<"Student Failed:(";
    else if( (grade1>=90) && (grade2>=90))
        cout<<"Student Graduated with Honors:)";
    else 
        cout<<"Student Graduated!";
    return 0;
}
