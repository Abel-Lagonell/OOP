#include "Complex.h"
#include <iostream>

using namespace std;

//No-arg constructor
Complex::Complex(){
    real = 0.0;
    img = 0.0;
}
    
//Arg constructor
Complex::Complex(double newReal, double newImg){
    real = newReal;
    img = newImg;
}

//Getters and Setters
double const Complex::getReal() { return real; }
double const Complex::getImg() { return img; }
void Complex::setReal(double newReal) { real = newReal; }
void Complex::setImg(double newImg) { img = newImg; }

//Printing of only the complex number
void Complex::printComplex(){
    if(img!=0)
        cout << real << ((img>0)? "+":"") << img <<"i"; 
    else 
        cout << real;
}

//Complex number addition as defined within the class
Complex Complex::addition(Complex & comp){
    double sumReal = comp.real + real;
    double sumImg = comp.img + img;
    return Complex(sumReal, sumImg);
}

//Comples number addition as defined outside the class
Complex additionTwo(Complex & comp1, Complex & comp2){
    Complex addComp = Complex();
    
    addComp = addComp.addition(comp1);
    addComp = addComp.addition(comp2);
        
    return addComp;
}

//Complex number array Addition as defined outside the class
Complex additionArray(Complex complexArray[], int size){

    Complex sum = Complex();

    for (int i = 0; i < size; i++){
        sum = sum.addition(complexArray[i]);
    }

    return sum;
}