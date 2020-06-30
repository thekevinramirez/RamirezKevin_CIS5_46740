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
    float meal;     //the cost of meal
    float tax;      //tax of meal cost
    float tip;      //tip of the total with 0.20
    //Initialize all known variables
    meal = 88.67;
    tax = 0.0675;
    //Process Inputs to Outputs -> Mapping Process
    float total = meal + (meal * tax);
    tip = total *  0.2;
    //Maps known values to the unknown objectives

    //Display the Inputs/Outputs
    cout << "Your bill is $" << total << endl;
    cout << "For a 20% tip on your bill, it will be $" << tip << endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}