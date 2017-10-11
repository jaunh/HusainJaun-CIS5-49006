/* 
 * File:   Savitch Ptog Obj Ch.1 #1
 * Author: Jaun Husain
 * Created on September 17, 2017 
 * Purpose:  Ptog Obj Ch.1 #1
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
 
    int compsciMajors, cisMajors, totalStudents;
    
    cout<<"Press return after entering amount.\n";
    cout<<"Enter the number of Computer Science majors:\n";
    
    cin>>compsciMajors;
    cout<<"Enter the number of Computer Information Systems majors:\n";
    cin>>cisMajors;
    totalStudents=compsciMajors+cisMajors;
    cout<<"If there are ";
    cout<<compsciMajors;
    cout<<" Computer Science majors";
    cout<<" and \n";
    cout<<cisMajors;
    cout<<" Computer Information Systems majors, ";
    cout<<" then there are \n ";
    cout<<totalStudents;
    cout<<" total students.\n";
    
    
    
  
    return 0;
}