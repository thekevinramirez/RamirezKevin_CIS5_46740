/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on July 16, 2020 4:45 PM
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
// cross shape function
    void printX (int n) { // n denotes number of rows for x shape
   
   if (n % 2){   // modulo op for uneven rows
       for (int i = n; i >= 1; i--){   // outer loop prints rows 1 by 1
           for (int j = n; j >=1; j--){ // inner loop prints current row
             if ( j == i || j == (n - i + 1))
               cout << j;
               else 
                   cout << " ";
               }
              cout << endl; 
           }
           
       }
   
   
   else // for even rows
        for (int i = 1; i <=n ; i++){ // outer loop prints rows 1 by 1
            for (int j = 1; j <= n; j++){ // inner loop prints contents 
                if (j == i || j == (n - i +1)) // prints character in i-th and n+1-i
                    cout << " " << j << " ";
                
                else 
                    cout << " "; 
                }
                cout << endl; // will print a newline before printing next row
                
            }
        }
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


///////////////////////////////////////////// foward slash function
    void printFowardSlash(int n) {
    if (n%2){ // modulo op divides and returns remainder
        for (int i = n; i >= 1; i--){
            for (int j = n; j >= 1; j--){
                if (j == n-i+1){
                    cout << j;
            }
                else 
                    cout << " ";
        }
                    cout << endl;
    }
    
}
    else {
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                if (j == (n-i+1)){
                
                    cout << j;
                }
                else 
                    cout << " ";
                
            }
                    cout << endl;
        }
    }
}
/////////////////////////////////////////

//\\\\\\\\\\\\\\\\\\\\\\ backward slash
 void printBackwardSlash(int n){
     if (n%2){
         for (int i = n; i >= 1; i--){
             for (int j = n; j>= 1; j--){
                 if (j==i){
                     cout << j;
                 }
                 else 
                 cout << " ";
             }
                cout << endl;
         }
     }
     else {// for even number of lines 
     for (int i = 1; i <= n; i++){
         for (int j = 1; j <= n; j++){
             if (j==i){
                 cout << j;
             }
             else 
                cout << " ";
         }
                cout << endl;
     }
     }
    
}
   
    //Input or initialize values Here
    
    int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f->forward b->backward x->cross
    
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
   
    // xx
    if (shape == 'X' || shape == 'x') {
        printX(x);
    }
  
  
   // foward slash
   else if (shape == 'F' || shape == 'f') {
       printFowardSlash(x);
   }
  
   // backward slash 
   else if (shape == 'B' || shape == 'b') {
       printBackwardSlash(x);
   }
 
    //Exit
    return 0;
}