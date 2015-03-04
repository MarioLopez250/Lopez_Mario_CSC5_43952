/* 
 * File:   main.cpp
 * Author: Mario Lopez
 * Created on March 4, 2015, 10:19 AM
 *      Purpose: 1st Homework Problem-Chapter 1 Problem 2
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
    int numPods, pePPod, totPeas;
    cout<<"Hello\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the Number of pods:\n";
    
    cin>>numPods;
    
    cout<<"Enter the Number of peas in a pod:\n";
    cin>>pePPod;
    totPeas=numPods*pePPod;
    cout<<"If you have ";
    cout<<numPods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<pePPod;
    cout<<" peas in each pod, then\n";
    cout<<"You have ";
    cout<<totPeas;
    cout<<" Peas in all the pods.\n";
    cout<<"Good-bye\n";
     
    return 0;
}

