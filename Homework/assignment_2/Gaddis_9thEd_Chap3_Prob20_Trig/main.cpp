/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on July 6, 2020, 10:11 PM
 * Purpose:  to create a function to display fixed-point notation, rounding to four decimal places of precision
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float PI=4*atan(1);
const float CNVRAD=PI/180; 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
     float angle;// in degrees

    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << fixed;
    cout <<setprecision(0)<<"sin("<<angle<<") = "<<setprecision(4)<<sin(angle*CNVRAD)<<endl;
    cout <<setprecision(0)<<"cos("<<angle<<") = "<<setprecision(4)<<cos(angle*CNVRAD)<<endl;
    cout <<setprecision(0)<<"tan("<<angle<<") = "<<setprecision(4)<<tan(angle*CNVRAD);
     //Exit stage right or left! 
    return 0;
}