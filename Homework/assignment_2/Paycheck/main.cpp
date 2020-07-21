/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on July 6, 2020, 10:36 PM
 * Purpose:  calculate gross pay
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // for setprecision
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float ovrPay, pay, regPay, dblPay, ttlPay, hrs, ovrHrs;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs

    //Display the outputs
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> pay >> hrs;

    if (hrs >= 40.0) {
        
        dblPay=(pay*2.00);
        regPay=40.00*pay;
        
        ovrHrs=hrs-40.00;
        
        ovrPay=dblPay*ovrHrs;
        
        ttlPay=regPay+ovrPay;
        
        cout << setprecision(2) << fixed << "Paycheck = $ " << ttlPay << defaultfloat;
        
    }
    else {
        
        regPay = hrs*pay;
        cout << setprecision(2) << fixed << "Paycheck = $ " << regPay << defaultfloat;
    }
    //Exit stage right or left!
    return 0;
}