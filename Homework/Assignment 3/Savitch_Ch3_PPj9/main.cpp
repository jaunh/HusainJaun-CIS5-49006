/* 
 * File:   main.cpp
 * Author: Jaun Husain
 * Created on October 3, 2017
 * Purpose: Program the probability of the contestant winning the car behind the
 * door either by making a switch or either staying on the same door selection.
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
    srand(time(NULL));
    
    //Declare variables here
    int winStay=0;
    int winSwitch=0;
    for (int trail =0; trail<10000;trail++)
    {
        //Initialize process 
        
        int prize=rand()%3;
        int choice=rand()%3;
        int reveal;
        do
        {
            reveal=rand()%3;
        }
        while ((reveal==prize)||(reveal==choice));
        
        int switchDoor;
        for(int i=0;i<3;i++)
        {
            if((i!=reveal)&&(i!=choice))
                switchDoor=i;
        }
        //Set conditions here
        if (prize==choice)
            winStay++;
        if(prize==switchDoor)
            winSwitch++;
    }
    //Display output here
    cout<<"Wins when staying "<<winStay<<endl;
    cout<<"Win when switches. "<<winSwitch<<endl;
    
    return 0;
        }
    


       