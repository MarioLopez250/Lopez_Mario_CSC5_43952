/* 
 * File:   main.cpp
 * Author: Mario Lopez
 *
 * Created on March 2, 2015, 9:17 AM
 *      Purpose: Free Fall Problem from Savitch
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float G=3.2174e1f; //Acceleration in ft/sec^2
const float CNVFTMT=3.048e-1; //Conversion from feet to meters

// Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    float time,dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx (seconds)"<<endl;
    cin>>time;
    //calculate the distance
    //dstnce=static_cast<float>(1)/2*G*time*time;
    //dstnce=1.0f/2*G*time*time;
    //dstnce=1/2*G*time*time;//Does not work!! gives 0 because of division by 2
    //dstnce=0.5f*G*time*time;
    dstnce=1.0f/2*G*time*time;
    //dstnce=G*1/2*time*time;
    //Output the results
    cout<<"Distance fallen ="<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fallen ="<<CNVFTMT<<"(meters)"<<endl;
    //Exit Stage Right

    return 0;
}

