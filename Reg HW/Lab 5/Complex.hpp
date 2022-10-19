#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex{
private:
    double real,img;
public:

    Complex();
    Complex(double newReal,double newimg);

    double const getReal();
    double const getImg();

    void setReal(double newReal);
    void setImg(double newImg);

    void printComplex();
    
    Complex addition(Complex & comp);
};

Complex additionTwo(Complex & comp1, Complex & comp2);
Complex additionArray(Complex complexArray[], int size);

#endif