/**
 * Title                Number of Digits
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 10:21 AM
 * Modification Date:   10/17/2022 @ 10:37 AM
 * Description:         Getting user input to count how many digits they have
*/

#include <iostream>

using namespace std;

//Digit counter function
int getDigit(int n){
    //Counter Variable
    int i = 0;
    
    // Checks if number is 0
    if (n == 0)
        return 1;

    //Counts the digits until 0/10 = 0
    while ( n/10 != n){
        i++;
        n /= 10;
    }

    return i;
}

int main(){
    //Declare the variable
    int num;

    //Prompt user for the number
    cout << "Please enter the number: ";
    cin >> num;

    //Output the number of digits
    cout << "The number of digits is " << getDigit(num) << endl;

    return 0;
}