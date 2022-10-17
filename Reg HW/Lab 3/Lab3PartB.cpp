/**
 * Title                Printing infor about pointers
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 12:28 PM
 * Modification Date:   10/17/2022 @ 12:37 PM
 * Description:         Give out different information about a pointer
*/

#include <iostream>

using namespace std;

int main(){
    //Initialize the variables for num and pointer
    int num = 5;
    int* p = &num;

    //Output the neccessary information about them
    cout << "The value of the num is " << num << endl;
    cout << "The value of the num is " << *p << endl;
    cout << "The address of the num is " << &num << endl;
    cout << "The address of the num is " << p << endl;
    cout << "The value of the p pointer is " << p << endl;
    cout << "The address of the p pointer is " << &p << endl;
}