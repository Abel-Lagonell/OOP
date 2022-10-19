/**
 * Title                Complex Numbers
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.2a
 * Creation date:       10/17/2022 @ 11:00 PM
 * Modification Date:   10/17/2022 @ 12:49 PM
 * Description:         Make a class to add different complex numbers
*/

#include <iostream>
#include "Complex.cpp"

using namespace std;

int main(){

    //Initialize an Empty Complex number
    cout << "Complex number 1: "; 
    Complex comp1 = Complex();

    //Set the real and imaginary parts and print out the complex number
    comp1.setReal(2.4);
    comp1.setImg(4.1);
    comp1.printComplex();
    cout << endl;

    //Initialize and print out the Complex number
    cout << "Complex number 2: ";
    Complex comp2 = Complex(3.2,-3.6);

    //Initilize and print out the addition of the two numbers using addition
    Complex comp1_2 = comp1.addition(comp2);
    comp1_2.printComplex();
    cout << endl;

    //Initialize an empty Complexz number
    Complex comp3 = Complex();

    //Set the complex number to addisiton of the two numbers using additionTwo and print out result
    comp3 = additionTwo(comp1,comp2);
    cout << "Complex number 3: ";
    comp3.printComplex();
    cout << endl;

    //Initialize the complex array and print out the array
    cout << "Complex number 4 array: ";
    Complex comp4[] = {Complex(1,1), Complex(2,2), Complex(3,3), Complex(4,4)};
    for (Complex i : comp4) { i.printComplex(); cout << " ";}
    cout << endl;

    //Initialize an empty complex number
    Complex comp5 = Complex();

    //Add the array into the complex number andprint out results
    comp5 = additionArray(comp4, 4);
    cout << "Complex number 5: "; 
    comp5.printComplex();
    cout << endl;
    
    return 0;
}
