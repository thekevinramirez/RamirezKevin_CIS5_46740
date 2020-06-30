/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 *
 * Created on June 23, 2020, 11:01 AM
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
    float milBdgt, // Military Budget in billions
          fedBdgt, // Federal Budget in billions
          mlPrcnt; // Military Percentage 
    //Initialize all known variables
    milBdgt = 7.0e11f; // written in 700 billion
    fedBdgt = 4.1e12f;// written in 4.1 trillion in billions
    mlPrcnt = milBdgt / fedBdgt; // divide in order to get the percentage
    //Process Inputs to Outputs -> Mapping Process
    float Trlln = fedBdgt / 1.e12f; // to convert fedBdgt back to trillion
    float mll = milBdgt / 1.e9f;    // to convert milBdgt to billion
    //Maps known values to the unknown objectives

    //Display the Inputs/Outputs
    cout << "The Military Budget is $" << mll << " Billion." << endl;
    cout << "The Federal Budget is $" << Trlln << " Trillion." << endl;
    cout << "The percentage of the Military Budget out of the Federal Budget is "
            << mlPrcnt << "%." << endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}