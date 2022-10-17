/**
 * Title                Display Meters to Feet
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 10:37 AM
 * Modification Date:   10/17/2022 @ 10:47 AM
 * Description:         Output of meters to feet with 15 rows and 2 columns
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(){

    //Set up the Column headers
    cout << left << setw(10) << "Meters" << setw(10) << "Feet" << endl;

    //Set up the Body of the Table
    for (int i = 1; i <16; i++){
        cout << left << setw(10) << i << setw(10) << setprecision(3)  << fixed << i*3.280 << endl;
    }


    return 0;
}