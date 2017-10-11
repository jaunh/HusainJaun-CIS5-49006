/* 
 * File:   main.cpp
 * Author: Jaun Husain
 * Created on October 3, 2017
 * Purpose:  Print- approximate value of pi using formula given in Savitch Ch3.
 * pracproj:8
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Math library 
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!

int main() {
    
    //Declare variables here
    float pi;
    char choice;
    int n;
    int i;
    int exponent;
    int base;
    
    //Initialize process/loop
    do {
        //Initialize variables 
        pi=0;
        base=1;
    //Output loop command
        cout<<"Enter N value:";
        cin>>n;
    
        for (i=1, exponent=2;i;)
        {
            pi=pi+pow((-1),exponent)*4/base;
            base=base+2;
        }

        //Display output here
        cout<<"Pi value is:"<<pi<<endl;
        
        //Confirm user repeat/end?
        cout<<"\n'Y'/'y' to repeat for different variables:";
        cout <<"Else any other key to exit:";
        cin>>choice;
    }

    while (choice=='Y'||choice=='y');
    
    system("pause");
}
   

       