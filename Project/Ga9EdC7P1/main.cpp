/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on 7/7987ju736
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void getValues(int [], int );
int getHighest(int []);
int getLowest (int []);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
   const int size = 10; // size declarator 
   int userArray[size];
   int userNum; 
    
    //Initialize Variables
    
    
   // getValues (userArray, userNum); 
    
    //Process or map Inputs to Outputs
    
    cout << "Enter 10 integers:" << endl;
    //cin >> userArray;
    
    getValues(userArray, userNum);
    
    
    //Display Outputs
    
    cout << getHighest(userArray) << " is the highest number." << endl;
    cout << getLowest(userArray) << " is the lowest number.";

    //Exit stage right!
    return 0;
}


void getValues(int array[], int num){ // recieves values 
    
    for (int i = 0; i < 10; i++){
    cin >> num;
    array[i] = num;
    }
    
    
}


int getHighest(int array[]){
    int highest = array[0];
    
    for (int i = 1; i< 10; i++){
        if (array[i] >= highest){
            highest = array[i];
        }
    }
    return highest;
}

int getLowest(int array []) {
    int lowest = array[0];
    
    for (int i = 1; i < 10 ; i++){
        if (array[i] <= lowest){
            lowest = array[i];
        }
    }
    return lowest;
}