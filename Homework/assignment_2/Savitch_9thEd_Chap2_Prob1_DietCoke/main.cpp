/* 
 * File:Savitch_9thEd_Chap2_Probl_DietCoke
 * Author:Kevin Ramirez
 * Date:7/6/2020
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
const float CNVGRMS= 453.592; // Grams/ lb
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables or constants here
    float wDsrd,// Desired weight in lbs 
    mMouse,// Mass of mouse in Grams
    mKmse,// Mass of chemicals that results in termination
    mSoda,// Mass of liquid in soda can
    cnSint8;// Concentration of chemical in soda can 
    int nCans; // The limit of number of cans of Coke to drink
    //7 characters or less
    
    //Initialize or input data here
    mMouse= 35;// 35 Grams
    mKmse=5; // 5 grams 
    mSoda=350;// 350 grams
    cnSint8= 1e-3;// .001 Concentration
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>> wDsrd;
    
    nCans=wDsrd*CNVGRMS*mKmse/ (mMouse*mSoda*cnSint8);

    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<nCans<<" cans";
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}