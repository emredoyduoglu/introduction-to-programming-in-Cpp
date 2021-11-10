/*
Body mass index (BMI) is a number calculated from  a person’s weight and height.
According to the Centers for Disease Control and Prevention, the BMI is a fairly
reliable indicator of body fatness for most people. BMI does not measure body fat
directly, but research has shown that  BMI correlates to direct  measures  of  body  fat,  
such  as  underwater  weighing  and dual-energy X-ray absorptiometry. The formula 
for BMI is
    Weight/Height^2

Where weight is in kilograms and height is in meters.

Write a program that prompts for metric weight and height and outputs the BMI with two decimal places.

For example,  an  execution could look  like  this:
Please enter weight in kilograms: 50
Please enter height in meters: 1.58
BMI is: 20.03

File Name 

bmimetric.cpp

Score

There are five tests each worth 2 points
*/

#include <iostream>

using namespace std;

int main()
{
    double weight, height, BMI; 
	cout << "Please enter weight in kilograms: "; 
    cin >> weight; 
    cout << "Please enter height in meters: "; 
    cin >> height; 
 
    BMI = weight / (height * height );
    printf("BMI is: %.2f",BMI);
    
    return 0;
}
