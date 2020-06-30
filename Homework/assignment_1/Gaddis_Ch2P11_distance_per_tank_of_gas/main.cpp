/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on June 29, 2020, 11:47 PM
 * Purpose:
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
    float gal,  //gallons
            mls_p_g;//miles per gallon
    //Initialize all known variables
    gal = 20.0;
    mls_p_g = 23.5;
    //Process Inputs to Outputs -> Mapping Process
    float distance = gal * mls_p_g;
    //Maps known values to the unknown objectives
    cout << "This car's total distance is: " << distance << " miles." << endl;
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}