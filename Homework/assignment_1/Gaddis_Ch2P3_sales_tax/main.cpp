/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on June 29, 2020, 10:56 PM
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
    float purchase;     //amount of the purchase before tax
    float state_tax;    //state sales tax
    float county_tax;   //county sales tax
    //Initialize all known variables
    purchase = 95.0;
    state_tax = 0.04;
    county_tax = 0.02;
    //Process Inputs to Outputs -> Mapping Process
    float total = purchase + (purchase * state_tax) + (purchase * county_tax);
    //Maps known values to the unknown objectives

    //Display the Inputs/Outputs
    cout << "Amount of the purchase: $" << purchase << endl << endl;
    cout << "Total amount with tax: $" << total << endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}