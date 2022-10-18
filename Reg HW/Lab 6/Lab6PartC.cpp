/**
 * Title                Counting Letters
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 07:30 PM
 * Modification Date:   10/17/2022 @ 07:45 PM
 * Description:         Counting the letters
*/

#include <iostream>
#include <cstring>
using namespace std;

void count(const string & s){
    //Alphabet array
    int a[26] = {};

    //Size of the array
    size_t l = s.length();

    //Scans through 
    for (int i =0; i < 26; i++){
        for (char j : s){
            if ((j == 'A' + i || j == 'a' + i) && isalpha(j) ){
                a[i]++;
            }
        }
        if (a[i] != 0)
            cout << (char)('a' + i) << ":" << a[i] << " times" << endl;
    }
}

int main(){
    //Declaring the string variable
    string s;

    //Prompt for user input
    cout << "Enter a string: " << endl;
    getline(cin, s);

    //Prints out the count
    count(s);
}
