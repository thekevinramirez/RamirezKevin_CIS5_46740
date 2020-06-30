/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on June 29, 2020, 11:01 PM
 * Purpose: use double data type for all variables in this program to get the 
 *          average of a series of values
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
    double val_1,   //variable 1
            val_2,  //variable 2
            val_3,  //variable 3
            val_4,  //variable 4
            val_5;  //variable 5
    //Initialize all known variables
    val_1 = 28;
    val_2 = 32;
    val_3 = 37;
    val_4 = 24;
    val_5 = 33;
    //Process Inputs to Outputs -> Mapping Process
    double sum = val_1 + val_2 + val_3 + val_4 + val_5; //sum of all 5 variables
    double avg = sum / 5;   //average
    //Maps known values to the unknown objectives

    //Display the Inputs/Outputs
    cout << "The average of " << val_1 << ", " << val_2 << ", " << val_3 <<
            ", " << val_4 << ", and " << val_5 << " is " << avg << "!\n";
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}