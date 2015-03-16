/* 
 * File:   main.cpp
 * Author: Mario Lopez
 * 
 * Created on March 16, 2015, 9:23 AM
 *      Purpose: Gaddis Homework Chapter 3 Prob 1 Miles per Gallon
 * 
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Varibales
    unsigned short nGal, nMiles, mPerGal;
    //Prompt the User for number of Gallons and Number of miles
   
    cout<<"Enter the number of miles in can be driven on a full tank"
            <<" enter the number of miles in whole numbers"<<endl;
    cin>>nMiles;
    cout<<"Enter the number of gallons the car can hold"
            <<" enter the number of gallons in whole numbers"<<endl;
    cin>>nGal;
    //Calculate Miles Per Gallon (mPerGal)
    mPerGal=nMiles/static_cast<float>(nGal);
    cout<<"Your Car Millage is "<<static_cast<float>(mPerGal)
            <<" Miles per Gallon"<<endl;
    

    return 0;
}

