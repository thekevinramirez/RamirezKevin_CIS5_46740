/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on June 29, 2020, 11:16 PM
 * Purpose: Display the rising ocean lever per year 
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
    float oc_lvl,   //ocean level
            year_5, //in 5 years
            year_7, //in 7 years
            year_10;//in 10 years
    //Initialize all known variables
    oc_lvl = 1.5;
    year_5 = 5.0;
    year_7 = 7.0;
    year_10 = 10.0;
    //Process Inputs to Outputs -> Mapping Process
    float mil_5 = year_5 * oc_lvl;  //how long it is in 5 years
    float mil_7 = year_7 * oc_lvl;  //how long it is in 7 years
    float mil_10 = year_10 * oc_lvl;//how long it is in 10 years
    //Maps known values to the unknown objectives

    //Display the Inputs/Outputs
    cout << "Start: " << endl;
    cout << "Year 1 Ocean Level     = 0 millimeters.\n";
    cout << "Year 5 Ocean Level     = " << mil_5 << " millimeters.\n";
    cout << "Year 7 Ocean Level     = " << mil_7 << " millimeters.\n";
    cout << "Year 10 Ocean Level    = " << mil_10 << " millimeters.\n";
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}