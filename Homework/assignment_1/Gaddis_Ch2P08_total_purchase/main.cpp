/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on June 29, 2020, 11:25 PM
 * Purpose: CREATE A PROGRAM THAT CAN ADD UP THE SUM OF THE PRODUCTS WITH TAX
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
    float itm_1,    //price of item 1
            itm_2,  //price of item 2
            itm_3,  //price of item 3
            itm_4,  //price of item 4
            itm_5,  //price of item 5
            sale_tax;   //tax
    //Initialize all known variables
    itm_1 = 15.95;
    itm_2 = 24.95;
    itm_3 = 6.95; 
    itm_4 = 12.95;
    itm_5 = 3.95;
    //Process Inputs to Outputs -> Mapping Process
    float sum = itm_1 + itm_2 + itm_3 + itm_4 + itm_5;
    float total = (sum * sale_tax) + sum;
    //Maps known values to the unknown objectives

    //Display the Inputs/Outputs
    cout << "The cost of 5 items plus tax is $" << total << "!\n"; 
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}