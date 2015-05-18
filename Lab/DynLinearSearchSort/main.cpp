/* 
 * File:   main.cpp
 * Author: Mario Lopez
 * Purpose: Example Linear Search/Mark Sort dynamic
 * Created on May 18, 2015, 8:03 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int *filAray(int);
void prntAry(int *,int,int);
int linSrch(int*,int,int);
void markSrt(int *,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    int SIZE=100;
    //Allocate and Fill the dynamic array
    int *array=filAray(SIZE);
    //Print the array
    prntAry(array,SIZE,10);
    //Sort the Array
    markSrt(array,SIZE);
    //Print again
    prntAry(array,SIZE,10);
    //Find something
    int rndVal=rand()%90+10;
    cout<<rndVal<<" was found at position "
        <<linSrch(array,SIZE,rndVal)<<endl;
    //De-allocate Memory
    delete []array;
    //Exit Stage Right!
    return 0;
}

int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        //if(a[i]==val)return i;
        if(*(a+i)==val)return i;
    }
    return -1;
}

void markSrt(int a[],int n){
    for(int pos=0;pos<n-1;pos++){
        for(int lst=pos+1;lst<n;lst++){
            if(a[pos]>a[lst]){
                int temp=a[pos];
                a[pos]=a[lst];
                a[lst]=temp;
            }
        }
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
    cout<<endl;
}

int *filAray(int n){
    //Allocate memory
    int *a=new int[n];
    //Fill Array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//2 digit numbers
    }
    return a;
}