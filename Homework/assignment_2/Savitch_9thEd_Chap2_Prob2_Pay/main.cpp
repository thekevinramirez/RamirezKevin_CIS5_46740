/* 
 * File:
 * Author:Kevin Ramirez
 * Date:7/6/2020
 * Purpose:to find new salary
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
#include <cmath>
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
    float preSalary, newSalary, retroPay, monSalary;
    //Initialize or input data here
    
    //Display initial conditions, headings here
    cout<<"Input previous annual salary."<<endl;
    cin>>preSalary;
    //Process inputs  - map to outputs here
   retroPay = (preSalary * 0.076f);
   
    newSalary = retroPay + preSalary;
   
    monSalary = (newSalary / 12.0f);
    
    //Format and display outputs here
    cout<<left<<"Retroactive pay "<<right<<setw(6)<<"= $"<<setw(7)<<fixed<<setprecision(2)<<retroPay / 2<<defaultfloat<<endl;
    cout<<left<<"New annual salary "<<right<<setw(4)<<"= $"<<setw(7)<<fixed<<setprecision(2)<<newSalary<<defaultfloat<<endl;
    cout<<left<<"New monthly salary "<<right<<setw(3)<<"= $"<<setw(7)<<fixed<<setprecision(2)<<monSalary<<defaultfloat;
    //Clean up allocated memory here
   
    //Exit stage left
    return 0;
}
