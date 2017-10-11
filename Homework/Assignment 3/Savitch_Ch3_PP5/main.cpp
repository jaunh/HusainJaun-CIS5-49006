/* 
 * File:   main.cpp
 * Author: Jaun Husain
 * Created on October 3, 2017
 * Purpose:  Print out numbers in Roman Numerals using the subtraction of
 * numerals and loops.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int toRomanLiterals(int);

int main( ) {
    int n;
    char choice;
    do 
    {
        do
        {
            cout<<"Enter a number between 1000 and 3000:";
            cin>>n;
        } 
        while(n<1000||n>3000);
        cout<<toRomanLiterals(n)<<endl;
        cout<<"Do you want to continue: 'y'/'n'"<<endl;
        cin>>choice;
    } while(choice !='n');
    system("pause");
    return 0;
}
//This part of the program will generate the roman numeral of user input integer
int toRomanLiterals(int n)
{
//Declare arrays of integers and roman numerals here
    int decNumbers[8]={1,5,10,50,100,500,1000,5000}, i, rem;
    char letters[8]={'I','V','X','L','C','D','M'};
    string roman;
    //Determine the input
    if(n<=0)
    {
        return-1;
    }
    else if(n<=3999)
    {
        cout<<"The year is:";
        while(n>0)
        {
            i=0;
            while(i<7)
            {
                while(n>=decNumbers[i]&&n<decNumbers[i+1]-decNumbers[i-rem])
                {
                    rem=i%2;
                    if(n>=decNumbers[i+1]-decNumbers[i-rem])
                    {
                        roman=roman+letters[i-rem]+letters[i+1];
                        n=n-(decNumbers[i+1]-decNumbers[i-rem]);
                    }
                    else
                    {
                     roman=roman+letters[i];
                     n=n-decNumbers[i];
                }
            }
                i++;
        }
    }
        cout<<roman<<endl;
}
    else {
        roman="The given input number is out of range";
        cout<<roman<<endl;
    }
    return 0;
}