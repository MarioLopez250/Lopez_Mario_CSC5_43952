/* 
 * File:   main.cpp
 * Author: Mario Lopez
 * Purpose: Implement the game BlackJack 
 *
 * Created on May 20, 2015, 9:56 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
    cout<<"                      Welcome to BlackJack!!!    "<<endl;
    //Cards 2-10 have their face values
    //J, Q, K are worth 10 points each 
    //Ace is worth either 1 or 11 player's choice
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables 
    unsigned int nGames,win=0,loss=0;

    ofstream output;//Output the results in a file
   
    int J = 11, K = 12, Q = 13;
    cout<<"Jacks:  Equals to 10       "<<J<<endl;
    cout<<"Kings:  Equals to 10       "<<K<<endl;
    cout<<"Queens: Equals to 10       "<<Q<<endl;
    cout<<endl;
   
    //Open the file
    output.open("GameStats.dat");
    //set code in do-while loop so we can check if the player wants to play again
    char choice;
    do
     {
       //initialize totals to 0
       int playTot = 0;    
       int dealTot = 0;
           
    int card1 = rand()%13+1;
    int card2 = rand()%13+1;//would generate a completely random number
    //between 1 and 13
    cout<<"Your cards are: "<<card1<<" and "<<card2<<endl;
    playTot=card1+card2;
    
    //Create the Menu for the sum of cards
    if(card1==11 || card2==11 || card1==12 || card2==12||card1==13 || card2==13)
    {
    if(card1==11 || card2==11){
        cout<<"You got a Jack!!!"<<endl;
        playTot=playTot-1;
        cout<<"Your hand Total is: "<<playTot<<endl;
    }
    if(card1==12 || card2==12 ){
        cout<<"You got a King!!!"<<endl;
        playTot=playTot-2;
        cout<<"Your hand Total is: "<<playTot<<endl;
    }
    if(card1==13 || card2==13 ){
        cout<<"You got a Queen!!!"<<endl;
        playTot=playTot-3;
        cout<<"Your hand Total is: "<<playTot<<endl;
    }
    }
    //cout<<"Your Total is now: "<<playTot<<endl;
    
    //Create the Menu for the sum of cards
    char input;
    if(card1==1 || card2==1)
    {
    cout<<"You got an Ace!!! Would you like to use it as a 1 or 11?"<<endl;
    cout<<"Enter 'A' for 1 or 'B' for 11"<<endl;
    cin >> input;
    switch (input)
    {
        case 'A':
            cout << "choice A you are going to use your Ace as a 1"<<endl;
            playTot=playTot;
            break;
        case 'B':
            cout << "choice B you are going to use your Ace as an 11"<<endl;
            playTot+=10;
            break;
        default: 
            cout << "Error!!! Invalid input"<<endl;
    }
        cout<<"Your Total is now: "<<playTot<<endl;
    }
    cout<<"Your Total is: "<<playTot<<endl;
    cout<<endl;
    
    int dCard1 = rand() % 13 + 1;
    int dCard2 = rand() % 13 + 1;
    cout<<"The Dealers cards are: "<<dCard1<<" and "<<dCard2<<endl;
    dealTot=dCard1+dCard2;
   
    //Create the Menu for the sum of cards
    if(dCard1==11 || dCard2==11 || dCard1==12 || 
       dCard2==12 || dCard1==13 || dCard2==13)
    {
    if(dCard1==11 || dCard2==11){
        cout<<"The Dealer got a Jack!!!"<<endl;
        dealTot=dealTot-1;
        cout<<"The Dealer hand Total is: "<<dealTot<<endl;
    }
    if(dCard1==12 || dCard2==12 ){
        cout<<"The Dealer got a King!!!"<<endl;
        dealTot=dealTot-2;
        cout<<"The Dealers hand Total is: "<<dealTot<<endl;
    }
    if(dCard1==13 || dCard2==13 ){
        cout<<"The Dealer got a Queen!!!"<<endl;
        dealTot=dealTot-3;
        cout<<"The Dealers hand Total is: "<<dealTot<<endl;
    }
    }
    //cout<<"The Dealers Total is now: "<<dealTot<<endl;
    
    //Create the Menu for the sum of cards
    if(dCard1==1 || dCard2==1)
    {
    cout<<"The Dealer got an Ace!!!"<<endl;
    if(dCard1<=10 || dCard2<=10)
    {
        dCard1=11;
    cout << "The dealer is going to use the Ace as an 11"<<endl;
            dealTot+=10;
    }
    else if(dCard1>=11 || dCard2>=1)
    {
        dCard1=1;
    cout << "The dealer is going to use the Ace as a 1"<<endl;
            dealTot=dealTot;
    }
    }
    cout<<"The Dealers hand Total is: "<<dealTot<<endl;
    cout<<endl;
    ///////////////////////////////////////////////////////////////
       
        if (playTot <= 21 && playTot>dealTot) 
        {
            cout << "YOU WIN !!! " << endl;
        } 
        else if (dealTot<= 21 && dealTot>playTot)
        {
            cout << "The Dealer Wins " << endl;
        }
        else if (playTot>21 && dealTot<=21) 
        {
            cout << "YOU Bust !!! The Dealer wins" << endl;
        } 
        else if (dealTot> 21 && playTot<=21)
        {
            cout << "The Dealer Busts!!! You Win!!!" << endl;
        }
        else if(playTot==dealTot)
        {
            cout<<"You tied!!!"<<endl;
        }
         cout<<endl;
         cout<<"Do you want to play again? \n"
             <<"'Q' to Quit or Press 'C' to continue." << endl;
         cin >> choice;
         cout<<endl;
    cout<<"============================================================="<<endl;

        //Output the results to the file
        output<<fixed<<setprecision(2)<<showpoint;
        output<<"Your statistics for the BlackJack game!!! \n"<<endl;
        cout<<endl;
        output<<"Player total is: \n"
              <<playTot<<endl;
        cout<<endl;
        output<<"Dealers total is: \n"
              <<dealTot<<endl;
        //Close the file
        output.close();
        }
        while((choice !='Q')&&(choice !='q')&&(choice ='C')&&(choice ='c'));

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
    
    //Exit Stage Right
    
    return 0;
}

