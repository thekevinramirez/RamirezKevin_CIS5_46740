/* 
 * File:main.cpp
 * Author: Kevin Ramirez
 *
 * Created on July 6, 2020, 10:30 AM
 *///System Libraries
 
#include <iostream>//Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    float average;
    float t1,t2,t3,t4,t5;

    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>t1>>t2>>t3>>t4>>t5;

    average = (t1 + t2 + t3 + t4 + t5) / 5;

    cout<<"The average = "<<fixed<<setprecision(1)<<average;
    //Map inputs -> outputs

    //Display the outputs

    //Exit stage right or left!
    return 0;
}}