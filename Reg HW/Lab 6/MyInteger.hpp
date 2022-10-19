#ifndef MYINTEGER_H
#define MYINTEGER_H
#include <iostream>

class MyInteger{

private:

    //Declaring Variables
    int value;
    static double averageOfIntegers;
    static int numberOfObjects, sumOfObjects;
    
public:

    //Constructor
    MyInteger(int newValue);

    //Getters
    int const getValue();
    double static getAverageOfIntegers();

    //Even or Odd
    bool const isEven();
    bool static isOdd(int n);

    //Equality
    bool const equal(int n);
    bool const equal(MyInteger &myInt);
};

#endif