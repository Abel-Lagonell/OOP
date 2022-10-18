/**
 * Title                Amount of even Digits
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 04:24 PM
 * Modification Date:   10/17/2022 @ 04:41 PM
 * Description:         Use recursion to count the number of even digits
*/

#include <iostream>

using namespace std;

int evenCount(int value){
    int count = 0;

    //Base cases
    if (value == 0) return 1;
    if (value == 1) return 0;

    //Actual recursion of the value being divided by ten each time
    if (value % 2 == 0){
        return 1 + evenCount(value/10);
    } else return evenCount(value/10);
}

int main(){

    //declaring user input
    int n;

    //prompt for user input
    cout << "Enter the number: ";
    cin >> n;

    //Outputting the number of even digits
    cout << "The number of even digits is " << evenCount(n) << endl;

    return 0;
}

