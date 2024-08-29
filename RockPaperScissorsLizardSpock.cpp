/* This code is for playing rock, paper, scissors, lizard,
spock from the popular show The Big Bang Theory */

#include <iostream>

//include for random number
#include<stdlib.h>

//use std namespace
using namespace std;

//create a function to be called for the game
bool RPSLS(){

  //the end return value of this function to determine it the user plays again
  bool again = false;

  //start to game
  cout<<endl;
  cout<< "ROCK PAPER SCISSORS LIZARD SPOCK!!!"<<endl;
  cout<<endl;
  cout<< "Select the number corresponding to your choice on shoot!"<<endl;
  cout<<endl;

  //possible choices with corresponding numbers
  cout<< "1) Rock"<<endl;
  cout<< "2) Paper"<<endl;
  cout<< "3) Scissors"<<endl;
  cout<< "4) Lizard"<<endl;
  cout<< "5) Spock"<<endl;

  cout<< "shoot! ";

  //for user input
  int user;

  //set user input
  cin>>user;

  //for spacing purposes
  cout<<endl;
  
  //get random number from computer
  srand (time(NULL));
  int computer = rand() % 5 + 1;

  //set this to 1 for win, 2 for tie, and 3 for lose
  int win;

  //user enters rock
  if(user == 1){
    //computer loses (lizard or scissors)
    if(computer == 4 || computer == 3){
      win = 1;
    }
    //computer ties
    else if(computer == 1){
      win = 2;
    }
    //user loses
    else{
      win = 3;
    }
  }

  //user enters paper
  else if(user == 2){
    //computer loses (Rock or spock)
    if(computer == 1 || computer == 5){
      win = 1;
    }
    //computer ties
    else if(computer == 2){
      win = 2;
    }
    //user loses
    else{
      win = 3;
    }
  }

  //user enters scissors
  else if(user == 3){
    //computer loses (Scissors or Lizard)
    if(computer == 2 || computer == 4){
      win = 1;
    }
    //computer ties
    else if(computer == 3){
      win = 2;
    }
    //user loses
    else{
      win = 3;
    }
  }

    //user enters lizard
  else if(user == 4){
    //computer loses (Rock or spock)
    if(computer == 2 || computer == 5){
      win = 1;
    }
    //computer ties
    else if(computer == 4){
      win = 2;
    }
    //user loses
    else{
      win = 3;
    }
  }

    //user enters spock
  else if(user == 5){
    //computer loses (scissors or rock)
    if(computer == 1 || computer == 3){
      win = 1;
    }
    //computer ties
    else if(computer == 5){
      win = 2;
    }
    //user loses
    else{
      win = 3;
    }
  }

  //user selected none of the above
  else{
    cout<< "That's not an option! Try again."<<endl;
    again = true;
    return again;
  }

  if(win ==1){
    cout<<"You Win!"<<endl;
  }
  else if(win == 2){
    cout<<"It's a Tie!"<<endl;
  }
  else{
    cout<<"You Lose."<<endl;
  }

  //ask if they would like to play again
  cout<<"Play again?"<<endl<<"Type 1 for yes"<<endl<<"Type 2 for no"<<endl;

  //int for if they want to play again
  int another;

  //get user input
  cin>>another;

  //if 1 then play again if not then don't
  if(another == 1){
    again = true;
  }
  else{
    again = false;
  }

  //returns the boolean to determine if they play again
  return again;
}


//main function
int main(){
  //set this to true to start so the game is played
  bool playAgain = true;

  //as long as playAgain remains true the user will keep playing
  while(playAgain){
    //sets play again to the return value of the function
    playAgain = RPSLS();
  }

  return 0;
}