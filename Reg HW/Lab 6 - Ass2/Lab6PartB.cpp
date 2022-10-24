/**
 * Title                Find the biggest Digit amongst them all
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 07:00 PM
 * Modification Date:   10/17/2022 @ 07:25 PM
 * Description:         Given user input until 0 find the biggest digit and how many times it appears
*/

#include <iostream>

using namespace std;

int main(){
    int count =0 , max =0, n  =0;

    cout << "Enter numbers: ";

    do{
        //prompt for user input
        cin >> n;

        //Check for max
        if(n >= max ){
            if (n==max) count++;
            if (n>max){
                count = 1;
                max = n;
            }
        }

    }while (n != 0);

    //Output the Max count and Max
    cout << "The largest number is " << max << endl << "The occurence count of the largest number is " << count << endl;

}