/* 
 * File:   main.cpp
 * Author: Mario Lopez
 *
 * Created on March 16, 2015, 9:54 AM
 *      Purpose: Homework chapter 3 Problem 2
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
    unsigned short classA, classB, classC;
    float tSales;//Amount of money in ticket sales
    
    //Prompt the User for number of tickets sold
   
    cout<<"How many class A tickets where sold?"<<endl;
    cin>>classA;
    cout<<"How many class B tickets where sold?"<<endl;
    cin>>classB;
    cout<<"How many class C tickets where sold?"<<endl;
    cin>>classC;
    
    //Calculate amount of money in tickets sales
    
    tSales=(classA*15)+(classB*12)+(classC*9);
    cout<<"The amount of money in tickets sales is "<<tSales<<endl;
    
    
    return 0;
}

