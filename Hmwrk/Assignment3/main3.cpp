/* 
 * File:   main.cpp
 * Author: Mario Lopez
 *
 * Created on March 25, 2015, 8:50 AM
 * Purpose: Bill Cable
 */
//System Libraries
#include <iostream>//I/O standard
#include <iomanip>//Formatting
#include <fstream>//I/O File
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!

int main(int argc, char** argv) {
    //Declare Variables
    ofstream output;//Output the results in a file
    float vwdHrs;//Hours Viewed (hrs)
    char package;//Package AaBbCc
    const int SIZE=40;//Max size of name = 39 characters
    char name[SIZE];//Customer Name
    float bill;//Cable Bill in $'s
        
    //Open the file
    output.open("Cable.dat");
    //Prompt the user for inputs
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"what is your Package A,B,C"<<endl;
    cin>>package;
    cout<<"What is the customer's name?"<<endl;
    cin.ignore();
    cin.getline(name, SIZE);
       
    //Calculate the bill
    switch(package){
        case'A':
        case'a':{
            bill=9.95;
            if(vwdHrs>10)bill+=2*(vwdHrs-10);
            break;
        }
         case'B':
         case'b':{
            bill=14.95;
            if(vwdHrs>20)bill+=(vwdHrs-20);
            break;
        }
         case'C':
         case'c':{
            bill=19.95;
            break;
        }
        default: cout<<"Wrong Package Chosen!!!"<<endl;
    };
    
    //Output the results to the file
    output<<fixed<<setprecision(2)<<showpoint;
    output<<"Your Cable Bill From CSC5 RCC Programming Class"<<endl;
    output<<"Customer Name: "<<name<<endl;
    output<<"Package "<<package<<endl;
    output<<"Hours viewed "<<vwdHrs<<" (hrs)"<<endl;
    output<<"Amount Owed: $"<<bill<<endl;
    //Close the file
    output.close();
    
    return 0;
}

