/**
 * Title                Complex Numbers
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 11:00 PM
 * Modification Date:   10/17/2022 @ 11:51 PM
 * Description:         Make a class to add different complex numbers
*/

#include <iostream>
#include "Complex.h"

int main(){

    Complex comp1 = Complex();

    comp1.setReal(2.4);
    comp1.setImg(4.1);

    Complex comp2 = Complex(3.2,-3.6);

    comp1.addition(comp2);
    comp1.printComplex();

    Complex comp3 = Complex();

    comp3 = Complex::additionTwo(comp1,comp2);
    comp3.printComplex();

    Complex comp4[] = {Complex(1,1), Complex(2,2), Complex(3,3), Complex(4,4)};
    Complex comp5 = Complex();

    comp5 = Complex::additionArray(comp4, 4);
    comp5.printComplex();
    

}
