/**
 * Title                Array SUM
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 12:30 PM
 * Modification Date:   10/17/2022 @ 12:51 PM
 * Description:         Get the array 6 value and then sum evens up.
*/

#include <iostream>

using namespace std;


double sumEven (const double * arr, int size){
    //Initalize sum to 0
    double sum = 0;
    
    //Odd numbered location Sum
    for (int i=1; i<size; i+=2){
        sum += *(arr +i);
    }
    
    return sum;
}

int main(){
    //Declare the array
    double a[6];

    //Prompt for user input
    cout << "Please enter six double numbers: ";
    for (int i =0; i<6; i++)
        cin >> a[i];
    
    //Output sum
    cout << "Sum of valuese at even locations: " << sumEven( a, 6) << endl;
}
