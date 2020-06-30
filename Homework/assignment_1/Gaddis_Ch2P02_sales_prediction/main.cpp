/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on June 28, 2020, 10:43 PM
 * Purpose: Create a program that will predict how much the East Coast division
 *          will generate if the company has $8.6 million in sales this year.
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
    float ttl_sales,    // total sales percentage
            gnrt;       // what the company generated
    //Initialize all known variables
    ttl_sales = 0.58;
    gnrt = 8.6e6f;
    //Process Inputs to Outputs -> Mapping Process
    float total = gnrt * ttl_sales;
    //Maps known values to the unknown objectives
    float mill = gnrt / 1e6f;   //convert it back to reduced form
    float prft = total / 1e1f;  //convert it to not show #e# form
    //Display the Inputs/Outputs
    cout << "If  East Coast sales division made $" << mill << " million and "
            << "keeps " << ttl_sales << " of sales, then the company "
            << "generated $" << prft << ".\n";
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}