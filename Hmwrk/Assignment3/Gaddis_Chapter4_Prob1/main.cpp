/* 
 * File:   main.cpp
 * Author: Mario Lopez
 *
 * Created on March 23, 2015, 10:19 AM
 *      Purpose: Gaddis Chapter 4 Problem 1
 *              Minimum/Maximum
 * 
 */

//System Library
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
    
    //Declare Variables
    float num1, num2;
    cout<<"Enter Two Numbers"<<endl;
    cin>>num1;
    cin>>num2;
    num1>num2?cout<<num1<<" is greater than "
            <<num2:cout<<num1<<" is smaller than "<<num2;
    
    
    return 0;
}

