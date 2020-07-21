/* 
 * File:Savitch_9thEd_Chap2_Prob5_Room
 * Author:Kevin Ramirez
 * Date:7/6/2020
 * Purpose:to calculate the amount of people in the meeting room to see if it violates the maximum room capacity.
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
   
    //Declare variables or constants here
    //7 characters or less
    int roomCap =0, numberPeople =0;
    //Initialize or input data here
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>roomCap>>numberPeople;
    //Display initial conditions, headings here
   
    //Process inputs  - map to outputs here
    if (numberPeople >= roomCap) {
    //Format and display outputs here
    cout<<"Meeting cannot be held."<<endl;
    cout<<"Reduce number of people by " << numberPeople - roomCap<< " to avoid fire violation.";
    } else {
    cout<<"Meeting can be held."<<endl;
    cout<<"Increase number of people by "<<roomCap - numberPeople << " will be allowed without violation.";
    }
    //Clean up allocated memory here
   
    //Exit stage left
    return 0;
}