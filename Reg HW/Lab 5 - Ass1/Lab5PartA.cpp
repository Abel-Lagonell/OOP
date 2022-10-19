/**
 * Title                Divisibility by 4 and sqaure roots
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 01:17 PM
 * Modification Date:   10/17/2022 @ 01:31 PM
 * Description:         Get positive number and if greater than 100 sqrt, if less than 100 then see its divisibility and divide with remainder
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //Declare variables
    int n; 
    string s;

    //Prompt for user input
    cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    cin >> n;

    //Logic of the function
    if (n<0){
        cout << "The program does not accept negative numbers" << endl;
    } else if (n > 100){
        cout << "The entered number is greater than 100 and the square root of the number is " << sqrt(n) << endl;
    } else {
        //s is chaning to see if n is divisible by 4 or not
        s = (n%4 == 0)? "divisible":"not divisible";
        cout << "The given number (" << n << ") is " << s << " by 4" << endl;
        cout << "Qoutient: " << n/4 << " and the Remainder: " << n%4 << endl;
    }
}