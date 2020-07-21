/* 
 * File:Savitch_9thEd_Chap2_Prob9_Sums
 * Author:Kevin Ramirez
 * Date:1/16/2020
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
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
    float value = 0,
    pSum = 0,
    nSum = 0;
    //Initialize or input data here
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
   
    //Process inputs  - map to outputs here
    for (int i= 0; i < 10; i++){
    cin>>value;
    if (value > 0) {
    pSum += value;
    } else {
    nSum += value * -1.0f;
    }
    }
    //Format and display outputs here
    cout<<left<<"Negative sum ="<<right<<setw(4)<<nSum*-1.0f <<endl;
    cout<<left<<"Positive sum ="<<right<<setw(4)<<pSum<<endl;
    cout<<left<<"Total sum    ="<<right<<setw(4)<<(nSum*-1.0f)+pSum;
    //Clean up allocated memory here
   
    //Exit stage left
    return 0;
}