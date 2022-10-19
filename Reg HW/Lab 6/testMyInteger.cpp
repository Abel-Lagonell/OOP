/**
 * Title                Integers
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/19/2022 @ 1:00 PM
 * Modification Date:   10/19/2022 @ 5:24 PM
 * Description:         Class that tells avg, count, sum of the objects as a whole
*/

#include <iostream>
#include "MyInteger.cpp"

using namespace std;

int main(){
    //Getting the initial values
    cout << "The average of the integers is " << MyInteger::getAverageOfIntegers() << endl;
    cout << "isOdd(3) = " << ((MyInteger::isOdd(3))? "true":"false") << endl;

    //Initialize the Integers
    MyInteger i1 = MyInteger(9323);
    MyInteger i2 = MyInteger(147);
    MyInteger i3 = MyInteger(9323);

    //Printing out the information
    cout << "i1.isEven() = " << ((i1.isEven())? "true":"false")  << endl;
    cout << "i3.equal(843) = " << ((i3.equal(843))? "true":"false")  << endl;
    cout << "i1.equals(i3) = " << ((i1.equal(i3))? "true":"false")  << endl;
    cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;

    return 0;
}
