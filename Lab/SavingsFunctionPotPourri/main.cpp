/* 
 * File:   main.cpp
 * Author: Mario Lopez
 * Purpose: Functions Examples
 * Created on April 20, 2015, 8:15 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes 
float save1(float,float,int);//Power Function
float save2(float,float,int);//Exponential and Log Function
float save3(float,float,int);//For-Loop
float save4(float,float,int);//Recursive -> Calling Itself
float save5(float=100.0f,float=0.08f,int=9);//Defaulted Parameter
void  save6(float &,float,float,int);//Pass By Reference
void  save7(float &,float,int);//Pass By Reference
float save1(float,float,float);//Over Ridden Function/Same Name

//Execution begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float pv=100.0f;//Present Value $'s
    float ir=0.08f;//Interest Rate %/yr
    int   nC=9;    //Number of compounding periods years
    //Output the inputs 
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate = "<<ir*100<<"%"<<endl;
    cout<<"Number of Compounding Periods = "<<nC<<"(Years)"<<endl;
    //Calculate the Savings
    cout<<"Savings Function 1 = $ "<<save1(pv,ir,nC)<<endl;
    float nCf=nC;
    cout<<"Savings Function 1 = $ "<<save1(pv,ir,nCf)<<endl;
    cout<<"Savings Function 2 = $ "<<save2(pv,ir,nC)<<endl;
    cout<<"Savings Function 3 = $ "<<save3(pv,ir,nC)<<endl;
    cout<<"Savings Function 4 = $ "<<save4(pv,ir,nC)<<endl;
    cout<<"Savings Function 5 = $ "<<save5(pv,ir,nC)<<endl;
    cout<<"Savings Function 5 = $ "<<save5(pv,ir)<<endl;
    cout<<"Savings Function 5 = $ "<<save5(pv)<<endl;
    cout<<"Savings Function 5 = $ "<<save5()<<endl;
    float fv;
    save6(fv,pv,ir,nC);
    cout<<"Savings Function 6 = $ "<<fv<<endl;
    save7(pv,ir,nC);
    cout<<"Savings Function 7 = $ "<<pv<<endl;

    return 0;
    
}
///////////////////////////////////////////////////////////
//Function for Future Value Calculation
//inputs
//     p-> Present Value $'s
//     i-> Interest Rate %/Compounding Period
//     n-> Compounding Period yr's
//outputs
//     fv-> Future Value $'s
///////////////////////////////////////////////////////////

float save1(float p,float i,int n){
    cout<<"save1 with integer n"<<endl;
    return p*pow((1+i),n);
}

float save1(float p,float i,float n){
    cout<<"save1 with float n"<<endl;
    return p*pow((1+i),n);
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save4(float p,float i,int n){
    if(n<=0)return p;//1st return
    return save4(p,i,n-1)*(1+i);//2nd return
}

float save5(float p,float i,int n){
    return p*pow((1+i),n);
}

void save6(float &f,float p,float i,int n){
    f=p*pow((1+i),n);
}

void save7(float &p,float i,int n){
    p=p*pow((1+i),n);
}