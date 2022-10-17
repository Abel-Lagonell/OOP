/**
 * Title                Sum of Digits
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 04:00 PM
 * Modification Date:   10/17/2022 @ 04:21 PM
 * Description:         Given a number give the sum of the digits 
*/

#include <iostream>

using namespace std;

int main(){
    //Declare user input and Initialize the sum variable
    int n, sum = 0;

    //User input
    cout << "Enter an integer between 0 and 100000: ";
    cin >> n;

    //User input if outside of the bounds
    while ( n<0 || n>1000000 ){
        cout << "Please enter an integer between 0 and 100000: ";
        cin >> n;
    }

    //sums up the digits
    while (n/10.0 != 0){
        sum += n%10;
        n /= 10;
    }

    //outputs sum
    cout << "The sum of the digits is " << sum << endl;
}