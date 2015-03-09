/* 
 * File:   main.cpp
 * Author: Mario Lopez
 *      Purpose: Homework Problems 
 *
 * Created on March 9, 2015, 10:26 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables.
    unsigned short wtlbs, htin, ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem,BMRMale,nCBars;
    //Prompt the user for input
    cout<<"How many candy bars will it take"<<endl;
    cout<<"to maintain your weight?"<<endl;
    cout<<"all inputs are integers!!!"<<endl;
    cout<<"Input your weight in lbs"<<endl;
    cin>>wtlbs;
    
    cout<<"Input your height in inches"<<endl;
    cin>>htin;
    
    cout<<"Input your age in years"<<endl;
    cin>>ageyrs;
    
    cout<<"Are you male or female m/f? one character input"<<endl;
    cin>>mf;
    //Calculates
    
    BMRFem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8*ageyrs;
    //        Ques       if Male        if Female
    nCBars=((mf=='m')?(BMRMale/cBar):(BMRFem/cBar));
    
    //Output the results
            
    cout<<"Your weight = "<<wtlbs<<"(lbs)"<<endl;
    cout<<"Your height = "<<htin<<"(inches)"<<endl;
    cout<<"Your age = "<<ageyrs<<"(years)"<<endl;
    cout<<"Your sex = "<<((mf=='m')?"Male":"Female")<<endl;
    cout<<"You can eat "<<nCBars<<" candy bars per/day"<<endl;
    //Exit stage right
      
    return 0;
}

