#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex{
private:
    double real,img;
public:
    double getReal();
    double getImg();

    void const setReal(double newReal);
    void const setImg(double newImg);

    Complex();
    Complex(double newReal,double newimg);

    void printComplex();
    
    Complex addition(Complex & comp);
};

Complex additionTwo(Complex & comp1, Complex & comp2);
Complex additionArray(Complex complexArray[], int size);

#endif