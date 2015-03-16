/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 16, 2015, 8:56 AM
 */


//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
     //Declare Variables
    ofstream output;//Output the results
    float hrsWkd;
    float payRate;
    float oRate=1.5f;
    float oTime=40.0f;
    float payChk;//Gross Pay
    
    output.open("Payroll.dat");
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"what is your pay rate ($'s/hr)?"<<endl;
    cin>>payRate;
    //Calculate the PayCheck
    //cout<<"How many hours this week di you work?"<<endl;
    //cin>>hrsWkd;
    
    payChk=payRate*hrsWkd;
    payChk+=payRate*(hrsWkd+(oRate-1)*(hrsWkd));
    
    cout<<fixed<<setprecision(2)<<showpoint;
    
    
    cout<<"Hours worked "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $ "<<payRate<<"(hr)"<<endl;
    cout<<"Over Time Rate "<<oRate<<"(hrs)"<<endl;
    cout<<"Over Time Begins "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross Pay = $ "<<payChk<<"(hrs)"<<endl;
    

    return 0;
}

