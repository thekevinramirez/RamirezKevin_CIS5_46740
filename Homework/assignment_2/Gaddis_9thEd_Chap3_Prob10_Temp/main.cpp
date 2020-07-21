/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on July 6, 2020, 12:36 PM
 * Purpose: To convert Celsius temperatures to Fahrenheit temperatures.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    // Seed random number or initialize scanner

    // Declare Variables 
    float f, c;

    //Initialize or input i.e. set variable values
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin>>f;
    //Map inputs -> outputs
    c = ((f - 32) * 5) / 9;
    
    // Display  the outputs
   //cout << endl << c << " degrees Celcius is equal to: " << f << " degrees Farenheit" << endl;
    cout << fixed << setprecision(1) << f << " Degrees Fahrenheit = " << c << " Degrees Centigrade";

    // Exit
    return 0;
}