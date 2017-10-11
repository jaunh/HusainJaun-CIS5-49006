/* 
 * File:   Savitch Prac Prog Ch.1 #6
 * Author: Jaun Husain
 * Created on September 17, 2017 
 * Purpose:  Practice program #6
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main ( )
{
 
    int width, height, totalLength;
    
   
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the width of the rectangular area in feet:\n";
    
    cin>>width;
            
    cout<<"Enter the height of the rectangular area in feet:\n";
    cin>>height;
    totalLength =width+height*2;
    cout<<"If the rectangle is ";
    cout<< width;
    cout<<" feet wide\n";
    cout<<"and ";
    cout<<height;
    cout<<" feet tall, then\n";
    cout<<"you need ";
    cout<<totalLength;
    cout<<" feet of fence to enclose the rectangular area.\n";
    
  
    return 0;
}