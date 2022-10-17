/**
 * Title                Rock, Paper, Scissors
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 10:37 AM
 * Modification Date:   10/17/2022 @ 11:44 AM
 * Description:         Play RPS with the computer
*/

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

//Uses switch statements to turn int values into the corresponding choice
void intToRPS(int n, string &h){
    switch(n){
        case 0:
            h = "scissor";
        break;
        case 1:
            h = "rock";
        break;
        case 2:
            h = "paper";
        break;
    }
}

int main(){
    
    //Set up so that its randomized every launch
    srand(time(0));
    
    //Initializes the default variables
    int n = rand()%3;
    int m = 0;

    //Prompts for user input
    cout << "scissors (0), rock (1), paper(2): ";
    cin >> m;

    //Declaration of rock, paper, or scissors 
    string hand, player, outcome;
    intToRPS(n, hand);
    intToRPS(m, player);

    //Checks for outcome of RPS
    if (m == n) outcome = "You tied";
    else if ( m == (n+1)%3) outcome = "You won";
    else if ( n == (m+1)%3) outcome = "You lost";

    //Outputs result
    cout << "Computer is " << hand << ". You are " << player << ". " << outcome << endl;

    return 0;

}