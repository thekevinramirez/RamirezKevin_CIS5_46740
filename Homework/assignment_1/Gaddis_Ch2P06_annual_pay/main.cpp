/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on June 29, 2020, 11:08 PM
 * Purpose: show the total annual pay on the screen
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
    float payAmount,    //hold the amount of the pay
            payPeriod,  //hold the pay periods in a year
            annualPay;  //hold the employee's total annual pay 
    //Initialize all known variables
    payAmount = 2200.0;
    payPeriod = 26.0;
    //Process Inputs to Outputs -> Mapping Process
    annualPay = payAmount * payPeriod;
    //Maps known values to the unknown objectives

    //Display the Inputs/Outputs
    cout << "If a person was to make $" << payAmount << " in each month, and"
            << " he/she worked for " << payPeriod << " months, then he/she"
            << " should make $" << annualPay << " in a year.\n";
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}