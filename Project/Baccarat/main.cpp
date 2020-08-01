/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on July 19, 2020, 8:49 PM
 * Purpose: Create a program where the user plays baccarat
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
    string betting(){           //Process of baccarat since I don't know vectors
        int bnkrPly;            //Banker or player
        const int minValue = 1; //minimum value of random generator
        const int maxValue = 3; //maximum value of random generator
        
        bnkrPly = (rand() % (maxValue - minValue + 1)) + minValue;
        if (bnkrPly == 1){
            return "Banker";
        }
        else if (bnkrPly == 2){
            return "Player";
        }
        else if (bnkrPly == 3){
            return "Tie";
        }
    }

int main(int argc, char** argv)  {
    //Set the random number seed here
    srand(time(NULL));
    //Declare all variables for this function
    int playerBank = 500.0; //initial money from player
    int moneyBet;           //the amount the player is betting
    char b, B, P, p;        //letters to indicate player and banker
    char choice;            //player choose between banker and player
    
    cout << "BACCARAT:\n" << "Banker    |   Player" << endl;
    cout << "You have $" << playerBank << " left.\n";
    cout << "Enter your bets in this order ($, B/P):";
    cin >> moneyBet >> choice;
    
    if (moneyBet > playerBank){
        cout << "You don't have enough money to bet. Please try again.";
    }
    else if{
        switch (choice){
            case 'B' : cout << "You entered Banker.\n";
                        break;
            case 'b' : cout << "You entered Banker.\n";
                        break;
            case 'P' : cout << "You entered Player.\n";
                        break;
            case 'p' : cout << "You entered Player.\n";
            default : cout << "You did not enter B, b, P, or p!" << endl;
        }
        else if (choice == b || choice == B){
            string result = betting();
            string b = "Banker";
            if (result == b){
                int winnings = moneyBet + playerBank;
                winnings = playerBank;
                cout << "The winner of this round... is " << result <<"!"<<endl;
                cout << "Congratulations! You get $" << moneyBet 
                        << " added into your account." << endl;
            }
            else{
                int winnings = moneyBet - playerBank;
                winnings = playerBank;
                cout << "The winner of this round... is " << result <<"!"<<endl;
                cout << "Sorry. We will take $" << moneyBet << " from your"
                        << " account." << endl;
        }
    }
        if{
            string result = betting();
            string p = "Player";
            if (result == p){
                int winnings = moneyBet + playerBank;
                winnings = playerBank;
                cout << "The winner of this round... is " << result <<"!"<<endl;
                cout << "Congratulations! You get $" << moneyBet 
                        << " added into your account." << endl;
            }
            else{
                int winnings = moneyBet - playerBank;
                winnings = playerBank;
                cout << "The winner of this round... is " << result <<"!"<<endl;
                cout << "Sorry. We will take $" << moneyBet << " from your"
                        << " account." << endl;
            }
        }
        else{
            string result = betting();
            string t = "Tie";
            (result == t){
                cout << "The winner of this round... is " << result <<"!"<<endl;
                cout << "Congratulations! you don't lose anything!" << endl;
            }
        }
    
                
   
}return main;
