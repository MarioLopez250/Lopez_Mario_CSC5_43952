/* 
 * File:   main.cpp
 * Author: Mario Lopez
 *      Purpose: Chapter 5 Gaddis Problem 1 
 *              Sum of Numbers
 *
 * Created on April 6, 2015, 10:28 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    int num;
    //Prompt the user for input
    cout<<"Enter a positive integer value, "<<endl
        <<"and I will find the sum of all integer "
        <<"numbers from 1 to the number entered"<<endl;
    cin>>num;
    if(num>0)
    {
    int sumNum;
   int x;
    for (x=0; x<num; x++)
    
    sumNum+=x;
    
    cout<<"The sum of all integers numbers from 1 to "
        <<num<<" is "<<sumNum<<endl;
    }
    else
    {
    cout<<"Enter a positive integer value"<<endl;
    }
/*Write a program that asks the user for a positive integer value.
 *  The program should use
 * a loop to get the sum of all the integers from 1 up to the number entered. 
 * For example,
 * if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.
 * Input Validation: Do not accept a negative starting number.
*/
    return 0;
}

