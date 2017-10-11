/* 
 * File:   main.cpp
 * Author: Jaun Husain
 * Created on October 3, 2017
 * Purpose: Design a program which holds a formula/capacity of buoyant force,
 * then determine whether the inputed variables (weight+radius) of an object 
 * will float or sink in water
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>        //Standard Library
#include <ctime>          //Timing library

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!

int main () 
{ 
//Declare variables 
float weight;
float buoyantforce;
float radius; 

//Inputing objects
cout<<"Enter weight of object in pounds \n"; 
cin>>weight; 
cout<<"Enter radius of object in feet \n "; 
cin>>radius; 

//Initialize processes
buoyantforce=62.4*((4 *3.14 *radius*radius*radius)/3); 

if (buoyantforce>=weight) 

cout<<"The Sphere will float in water \n";

else 
    cout<<"The Sphere will sink in water \n"; 


}
       