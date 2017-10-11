/* 
 * File:   main.cpp
 * Author: Jaun Husain
 * Created on October 5, 2017
 * Purpose: 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main( )
{
//Declare variables
    float amountdue;
    float interest;
    float minpmnt;
    float balance;

//Process balance due and interest rate on revolving account
   
 cout<<"Enter balance due: ";
 cin>>balance;
        
    if (balance>1000)
            
        interest= ((balance-1000)*.01+(1000)*.015);
    else
        interest=balance*.015;
        amountdue=balance+interest;
        minpmnt=amountdue<=10?
        amountdue:((amountdue*.1)>10? (amountdue*.1):10);
        
//Output statements here
cout<<"\n Interest on balance is : "<<interest;
cout<<"\n Total amount due is: "<<amountdue;
cout<<"\n Minimum payment is: "<<minpmnt;
        

     
//End program here
    return 0;
}