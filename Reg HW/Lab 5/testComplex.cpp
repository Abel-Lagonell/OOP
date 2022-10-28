/**
 * Title                Complex Numbers
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.2a
 * Creation date:       10/19/2022 @ 11:00 AM
 * Modification Date:   10/19/2022 @ 12:49 PM
 * Description:         Make a class to add different complex numbers
*/

#include <iostream>
#include "Complex.cpp"

using namespace std;

int main(){

    //Initialize an Empty Complex number
    cout << "c1 created with no-arg constructor = "; 
    Complex comp1 = Complex();
    comp1.printComplex();
    cout << endl;

    //Set the real and imaginary parts and print out the complex number
    comp1.setReal(2.4);
    comp1.setImg(4.1);
    cout << "c1 real and imaginary parts changed = ";
    comp1.printComplex();
    cout << endl;

    //Initialize and print out the Complex number
    cout << "c2 created using the user-defined constructor = ";
    Complex comp2 = Complex(3.2,-3.6);
    comp2.printComplex();
    cout << endl;

    //Initilize and print out the addition of the two numbers using addition
    Complex comp1_2 = comp1.addition(comp2);
    cout << "c3=c1.addition(c2) = ";
    comp1_2.printComplex();
    cout << endl;

    //Initialize an empty Complexz number
    Complex comp3 = Complex();

    //Set the complex number to addisiton of the two numbers using additionTwo and print out result
    comp3 = additionTwo(comp1_2,comp2);
    cout << "c4 = additionTwo(c2,c3) = ";
    comp3.printComplex();
    cout << endl;

    //Initialize the complex array and print out the array
    cout << "additionArray(carray, 5): ";
    Complex comp4[] = {Complex(1,1), Complex(2,2), Complex(3,3), Complex(4,4), Complex(5,5)};
    for (Complex i : comp4) { i.printComplex(); cout << " + ";}

    //Initialize an empty complex number
    Complex comp5 = Complex();

    //Add the array into the complex number andprint out results
    comp5 = additionArray(comp4, 5);
    cout << "\b\b= "; 
    comp5.printComplex();
    cout << endl;
    
    return 0;
}
