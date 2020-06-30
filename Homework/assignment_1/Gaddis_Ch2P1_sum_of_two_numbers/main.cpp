/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on June 28, 2020, 10:38 PM
 * Purpose: To create a program to make a sum of two variables
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    //Set the random number seed here

    //Declare all variables for this function
    float a,    //variable #1
            b;  //variable #2
    //Initialize all known variables
    a = 50;
    b = 100;
    //Process Inputs to Outputs -> Mapping Process
    float total = a + b;
    //Maps known values to the unknown objectives

    //Display the Inputs/Outputs
    cout << "The sum of " << a << " and " << b << " equals to " << total << ".\n";
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}