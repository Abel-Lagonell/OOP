/**
 * Title                C++ Studying
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 09:50 AM
 * Modification Date:   10/17/2022 @ 10:00 AM
 * Description:         Print out how much time I should be studying C++
*/

#include <iostream>
using namespace std;

int main(){
    
    //Initializing the Variable for time
    int time = 13*((2*1.25)+2.5) + (2*1) + (1*2); // Time in hours
    time *= (60*60); // Time in seconds
    
    //Printing of first and last name
    cout << "First Name: Abel" << endl;
    cout << "Last Name: Lagonell" << endl;

    //Printing of the time
    cout << "I am supposed to spend " << time << " seconds studying C++ Programming\n";

    return 0;
}