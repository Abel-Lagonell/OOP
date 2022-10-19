#include "Complex.h"
#include <iostream>

using namespace std;

    Complex::Complex(){
        real = 0.0;
        img = 0.0;
    }
    

    Complex::Complex(double newReal, double newImg){
        real = newReal;
        img = newImg;
    }

    double const Complex::getReal() { return real; }
    double const Complex::getImg() { return img; }

    void Complex::setReal(double newReal) { real = newReal; }
    void Complex::setImg(double newImg) { img = newImg; }

    void Complex::printComplex(){
        cout << ((real>0)? "":"-") << real << ((img>0)? "":"-") << "i" << endl; 
    }

    Complex Complex::addition(Complex & comp){
        double sumReal = comp.real + real;
        double sumImg = comp.img + img;

        return Complex(sumReal, sumImg);
    }


Complex additionTwo(Complex & comp1, Complex & comp2){
    Complex addComp = Complex();
    
    addComp = addComp.addition(comp1);
    addComp = addComp.addition(comp2);
        
    return addComp;
}

Complex additionArray(Complex complexArray[], int size){

    Complex sum = Complex();

    for (int i = 0; i < size; i++){
        sum = sum.addition(complexArray[i]);
    }

    return sum;
}