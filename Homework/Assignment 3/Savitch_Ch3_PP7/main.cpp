/* 
 * File:   main.cpp
 * Author: Jaun Husain
 * Created on October 3, 2017
 * Purpose:  Generate a temperature integer which is equivalent in both celsius
 * and fahrenheit
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare variables
    int celsius; // Celcius value
    int fahrenheit; //Fahrenheit value
    //Initialize variables
    celsius=100;
    
    //Initialize Process
    cout<<"This reading shows what Celsius and Fahrenheit values as equal: "<<endl;
    cout<<"\nCelsius\t\tFahrenheit"<<endl;
    
    //Begin loop to initialize values 
    do {
        celsius--;
        fahrenheit=((9*celsius)/5)+32;
        cout<<""<<celsius<<"\t\t"<<fahrenheit<<endl;
    }
        //Output list of equivalent temperatures below
    while (celsius!=fahrenheit); {
        cout<<"\nThe temperature, less than 100, which is the same in C and F:"
                <<celsius<<endl;
        system("pause");
        return 0;
    }
  
}