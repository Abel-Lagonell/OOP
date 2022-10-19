#include "Complex.h"
#include <iostream>

using namespace std;

    double const COMPLEX_H::getReal() { return real; }
    double const COMPLEX_H::getImg() { return img; }

    void COMPLEX_H::setReal(double newReal) { real = newReal; }
    void COMPLEX_H::setImg(double newImg) { img = newImg; }

    COMPLEX_H::Complex(){
        real = 0.0;
        img = 0.0;
    }

    COMPLEX_H::Complex(double newReal, double newImg){
        real = newReal;
        img = newImg;
    }

    void  COMPLEX_H::printComplex(){
        cout << ((real>0)? "":"-") << real << ((img>0)? "":"-") << "i" << endl; 
    }

    Complex  COMPLEX_H::addition(Complex & comp){
        double sumReal = comp.real + real;
        double sumImg = comp.img + img;

        return Complex(sumReal, sumImg);
    }
    
Complex  COMPLEX_H::additionTwo(Complex & comp1, Complex & comp2){
    Complex addComp = Complex();
    
    addComp = addComp.addition(comp1);
    addComp = addComp.addition(comp2);
        
    return addComp;
}

Complex  COMPLEX_H::additionArray(Complex complexArray[], int size){

    Complex sum = Complex();

    for (int i = 0; i < size; i++){
        sum = sum.addition(complexArray[i]);
    }

    return sum;
}