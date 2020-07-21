/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Date: 7/6/2020
 * Purpose:  to find minimun amount of insurance
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
    int cost;//cost of home
    float insurance;// amount you need for insurance
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>cost;
    insurance = cost * 0.80f;
    cout<<"You need $"<<insurance<<" of insurance.";
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}