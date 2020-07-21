/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on July 6, 2020, 12:36 PM
 * Purpose:  To find out how many total calories that 
 *          
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float ncookies, calories;
    float cookies = 75.0f;
    
    //Initialize or input i.e. set variable values
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>ncookies;
    calories=ncookies*75.0f;
    cout<<"You consumed " <<calories<< " calories.";
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}