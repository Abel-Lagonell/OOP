/**
 * Title                Account information
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 01:02 PM
 * Modification Date:   10/17/2022 @ 01:15 PM
 * Description:         Has a class with bank information that can deposit, withdraw, and get the monthly interest
*/

#include <iostream>

using namespace std;

class Account{

public:
    //Declaring variables of the class
    int id;
    double balance, annualInterestRate;

    //Default class
    Account(){
        id = 0;
        balance = 0.0;
        annualInterestRate = 0.0;
    }

    //User input class
    Account(int _id, double _bal, double _aIR){
        id = _id;
        balance = _bal;
        annualInterestRate = _aIR;
    }
    
    //The functions for monthly interest, withdrawing, and depositing 

    double getMonthlyInterestRate(){
        return annualInterestRate/12;
    }

    void withdraw(double amount){
        balance -= amount;
    }

    void deposit(double amount){
        balance += amount;
    }

};

int main(){

    //Initilize the Account object
    Account acc = Account(1122, 20000, 4.5);

    //Withdraw and Deposit money
    acc.withdraw(2500);
    acc.deposit(3000);

    //Print out balance and monthly interest rate
    cout << "The balace for the account is " << acc.balance << endl;
    cout << "The monthly interest rate is " << acc.getMonthlyInterestRate() << endl;

    return 0;
}