/* 
 * File:   main.cpp
 * Author: Mario Lopez
 *Purpose: Program the game BlackJack
 * Created on May 2, 2015, 10:35 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!!!
int main(int argc, char** argv) {
    //Declare Variables 
    cout<<"                      Welcome to BlackJack!!!    "<<endl;
    //Cards 2-10 have their face values
    //J, Q, K are worth 10 points each 
    //Ace is worth either 1 or 11 player's choice
    
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    unsigned int nGames,win=0,loss=0;
   
    int K = 10, J = 10, Q = 10;
   
//set code in do-while loop so we can check if the player wants to play again
       char choice;
    do
     {
       //initialize totals to 0
       int playTot = 0;    
       int dealTot = 0;
           
    int card1 = rand()%11+1;
    int card2 = rand()%11+1;//would generate a completely random number
    //between 1 and 11
    cout<<"Your cards are: "<<card1<<" and "<<card2<<endl;
    playTot=card1+card2;
    cout<<"Your hand Total is: "<<playTot<<endl;
    cout<<"Your Total is: "<<card1+card2<<endl;
       
    //Create the Menu for the sum of cards
    int input;
    cin >> input;
    switch (input)
    {
        case 1:
            cout << "choice 1" ; break;
        case 2:
            cout << "choice 2" ; break;
        default: 
            cout << "Error" ;
    }
  
    int dCard1 = rand() % 11 + 1;
    int dCard2 = rand() % 11 + 1;
    cout << "The Dealers cards are: "<<dCard1<<dCard2<<endl;
    
    cout<<"The Dealers cards are: "<<card1<<" and "<<card2<<endl;
    playTot=card1+card2;
    cout<<"The D hand Total is: "<<playTot<<endl;
    cout<<"The Dealers Total is: "<<card1+card2<<endl;
       
      
        if (playTot <= 21 && playTot>dealTot) 
        {
            cout << "YOU WIN !!! " << endl;
        } 
        else
            cout << "YOU LOSE " << endl;
        
       
         cout<<"Do you want to play again? \n"
             <<"'Q' to Quit or Press 'C' to continue." << endl;
         cin >> choice;
        }
        while((choice !='Q')&&(choice ='C')&&(choice !='q')&&(choice ='c'));
   
    
/* Although many players may play in a single round of blackjack, 
 * it's fundamentally a two-player game. 
 * In blackjack, players don't play against each other; 
 * and they don't co-operate. The only competition is the dealer.
 * The aim of the game is to accumulate a higher point total than the dealer,
 *  but without going over 21. 
 * You compute your score by adding the values of your individual cards.
 * The cards 2 through 10 have their face value,
 *  J, Q, and K are worth 10 points each, 
 * and the Ace is worth either 1 or 11 points (player's choice).
 */  
 
  /*The player or players are dealt an initial two-card hand and add together 
  * the value of their cards. Face cards (kings, queens, and jacks) 
  * are counted as ten points. A player and the dealer can count
  *  their own ace as 1 point or 11 points. All other cards are counted as the 
  * numeric value shown on the card. After receiving their initial two cards,
  *  players have the option of getting a "hit", or taking an additional card. 
  * In a given round, the player or the dealer wins by having a score of 21 
  * or by having the highest score that is less than 21. Scoring higher than 21 
  * (called "busting" or "going bust") results in a loss. 
  * A player may win by having any final score equal to or less than 21 
  * if the dealer busts. If a player holds an ace valued as 11, the hand is 
  * called "soft", meaning that the player cannot go bust by taking
  *  an additional card; 11 plus the value of any other card will always be
  *  less than or equal to 21. 
  * Otherwise, the hand is "hard".*/
    
    //Exit stage right
    
    return 0;
}

