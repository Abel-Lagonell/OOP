/**
 * Title                Odd numbered index print
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 01:39 PM
 * Modification Date:   10/17/2022 @ 01:45 PM
 * Description:         Given string spit out the odd numbered characters
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    //Declare the string
    string s;

    //Prompt for user input
    cout << "Enter a string: ";
    getline(cin, s);
    
    //Output the odd numbered indexes
    for (int i=1; i<s.length(); i+=2){
        cout << s[i];
    }
    cout << endl;
}