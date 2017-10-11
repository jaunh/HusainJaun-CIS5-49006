/* 
 * File:   main.cpp
 * Author: Jaun Husain
 * Created on October 3, 2017
 * Purpose:  Create a calculator which inputs a loan and interest rate amount,
 * then outputs balance of the loan after amortization periods.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!

int main() {
    
    //Declare variables here
    
    float interestrate;
    float loan;
    float si;
    float balance;
    
    int month;
    
    float x;
    float y;
    
    char choice;
    
    do {
        cout<<"Enter the loan amount: ";
        cin>>loan;
        cout<<"Enter the interest rate:";
        cin>>interestrate;
        cout<<"The monthly payment is: $"<<(loan/20)<<"\n";
        si=0;
        balance=loan;
        month=0;
        while (balance>0)
        {
            si +=((interestrate*balance)/(100*12));
            month++;
            y=((interestrate*balance)/(100*12));
            x=((loan/20)-y);
            
     //New amount adjusted 
            balance-=x;
            if (balance<0)
                balance=0;
            cout<<"Remaining balance is: $"<<balance<<endl;
        }
        cout<<"Amount of the interest is: "<<((si*100*12)/(loan*month));
        cout<<"\nReset Calculator? Press 'Y' or 'y'";
        cin>>choice;
    }
    while(choice=='y'||choice=='Y');
system("pause");
}