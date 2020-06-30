/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on June 29, 2020, 11:40 PM
 * Purpose: display the miles per gallon that the car gets
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
            mls;// total distance
    //Initialize all known variables
    gal = 15.0;
    mls = 375.0;
    //Process Inputs to Outputs -> Mapping Process
    float mpg = mls / gal;
    //Maps known values to the unknown objectives
    cout << "This car's MPG is: " << mpg << " mpg." << endl;
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}