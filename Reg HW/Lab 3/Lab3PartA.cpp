/**
 * Title                Switch case
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 12:10 PM
 * Modification Date:   10/17/2022 @ 12:25 PM
 * Description:         Change a given string from lower to upper case and the upper to lower case
*/

#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

string swapCase(const string & n){
    string s = n;

    //Checks if the character is upper and changes it to lower and vice versa
    for (int i = 0; i < n.length(); i++){
        if (isalpha(s[i])){
            if (islower(s[i])) 
                s[i] = toupper(s[i]);
            else 
                s[i] = tolower(s[i]);
        }
    }

    return s;
}

int main(){

    //declare the string variable 
    string s;

    //Prompt for user input and spit out the modified string
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "The new string: " << swapCase(s) << endl;

    return 0;
}