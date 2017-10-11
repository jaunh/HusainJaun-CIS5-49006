
/* 
 * File:   main.cpp
 * Author: Jaun Husain
 * Created on Oct 10, 2017 
 * Purpose:  Assignment #3 with menu
 */

//System Libraries
#include <iostream> //Input output library
#include <cmath>    //Math library 
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Input Data/Variables
    cout<<"Choose from the Menu"<<endl;
    cout<<"Problem 1"<<endl;
    cout<<"Problem 2"<<endl;
    cout<<"Problem 3"<<endl;
    cout<<"Problem 4"<<endl;
    cout<<"Problem 5"<<endl;
    cout<<"Problem 6"<<endl;
    cout<<"Problem 7"<<endl;
    cout<<"Problem 8"<<endl;
    cout<<"Problem 9"<<endl;
    cin>>choice;
    
    //Process or map the inputs to the outputs
    switch(choice){
        case 1:{
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
            break;
        }
        case 2:{
            cout<<"No problem listed here";
        break; 
        }
        case 3:{
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

            break;
        }
        case 4:{
    
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
      
        return 0;
    }
  
            break;
        }
        case 5:{
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
            break;
        }
        case 6:{
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
            break;
        }
        case 7:{
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
            break;
        }
        case 8:{
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
            break;
        }
        case 9:{
            cout<<"No problem listed here"<<endl;
            break;
        }
        default:{
            cout<<"Please enter a number 1-9"<<endl;
            
        }
    }
    
    //Exit the program
    return 0;
}


