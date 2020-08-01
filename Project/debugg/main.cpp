/* 
 * File:   main.cpp
 * Author: Kevin Ramirez
 * Created on July 19, 2020, 8:49 PM
 * Purpose: Create a program where the user plays baccarat
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Formatting Library 
#include <cstdlib>  //Random Library
#include <string>   //String Library
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

int main(int argc, char** argv) {
    //Set the random number seed here
    srand(time(NULL));
    //Declare all variables for this function
    int playerBank = 500.0;     //initial money from player
    int moneyBet;               //the amount the player is betting
    char b, B, P, p;            //letters to indicate player and banker
    char choice;                //player chose between banker and player
    
    //Opening line of the program
    cout << "BACCARAT:" << endl << "Banker  |   Player" << endl;
    cout << "You have $" << playerBank << " left." << endl;
    cout << "Enter your bets in this order ($, B/P):";
    cin >> moneyBet>> choice;
    
    //Input Validation
    while (moneyBet > playerBank){
        cout << "You don't have enough money to bet. Remaining balance is: $";
        cout << playerBank << endl;
        cout << "Enter your bets in this order ($, B/P):";
    cin >> moneyBet>> choice;
    }
    do{ 
        if (moneyBet < playerBank){
            switch (choice){
                case 'B' : cout << "You enter Banker." << endl;
                break;
                case 'b' : cout << "You enter Banker." << endl;
                break;
                case 'P' : cout << "You enter Player." << endl;
                break;
                case 'p' : cout << "You enter Player." << endl;
                default :   cout << "You did not enter B or P. Please type the ";
                        cout << "correct letter." << endl;
            }
            if (choice == b || choice == B){
                string result = betting();
                string b = "Banker";
                if (result == b){
                    int winnings = moneyBet + playerBank;
                    winnings = playerBank;
                    cout << "The winner of this round is... " << result << "!\n";
                    cout << "Congratulations! You get $" << moneyBet;
                    cout << " added into your account." << endl;
                }
                else{
                    int winnings = moneyBet - playerBank;
                    winnings = playerBank;
                    cout << "The winner of this round is... " << result << "!\n";
                    cout << "Sorry. We will take $" << moneyBet << " from your";
                    cout << " account." << endl;
                }
            }
            else if(choice == p || choice == P){
                string result = betting();
                string p = "Player";
                if (result == p){
                    int winnings = moneyBet + playerBank;
                    winnings = playerBank;
                    cout << "The winner of this round is... " << result << "!\n";
                    cout << "Congratulations! You get $" << moneyBet;
                    cout << " added into your account." << endl;
                }
                else{
                    int winnings = moneyBet = playerBank;
                    winnings = playerBank;
                    cout << "The winner of this round is... " << result << "!\n";
                    cout << "Sorry. We will take $" << moneyBet << "from your";
                    cout << " account." << endl;
                }
            }
            else if (choice == b || choice == B || choice == p || choice == P){
                string result = betting();
                string t = "Tie";
                if (result == t){
                    cout << " The winner of this round is... Wait it's a " << result;
                    cout << " We will return your $" << moneyBet << endl;
                }
            }
        }
    }
    while (playerBank == 0);
        cout << "Game Over" << endl;
    
    return 0;
}