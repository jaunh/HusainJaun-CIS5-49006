/* 
 * File:   main.cpp
 * Author: Jaun Husain
 * Created on October 3, 2017
 * Purpose:  Print the street address of The Riddler's next caper (With Loop)
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
//Declare variables here
    
    int units;
    int tens;
    int hundreds;
    int thousands;
    
    
//Initialize process here
    for (int i=1001; i<=9999; i=i+2)
    {
        //Initialize variables of this process
        units= i%10;
        tens=i/10%10;
        hundreds=i/100%10;
        thousands=i/1000%10;
        
    //Set condition
        if (thousands !=(tens*3))
            continue;
        if (thousands !=hundreds&&thousands !=tens&&thousands !=units&&hundreds
                !=tens&&hundreds !=units&&tens !=units)
        {
            cout<<"The address is: "<<i<<", Pennsylvania Avenue"<<endl;
            break;
        
        }
    }
  
    
    return 0;
}