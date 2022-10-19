#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex{
private:
    //Declare the variables    
    double real,img;
public:
    //Constructors
    Complex();
    Complex(double newReal,double newimg);

    //Getters and Setters
    double const getReal();
    double const getImg();
    void setReal(double newReal);
    void setImg(double newImg);

    //Printing of Complex number
    void printComplex();
    
    //Complex addition
    Complex addition(Complex & comp);
};

//Complex addition as outside the array
Complex additionTwo(Complex & comp1, Complex & comp2);
Complex additionArray(Complex complexArray[], int size);

#endif