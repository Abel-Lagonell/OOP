#include "MyInteger.h"
#include <iostream>

using namespace std;

//CLASS FUNCTIONS

//Initializing the static variables
int MyInteger::sumOfObjects = 0;
int MyInteger::numberOfObjects = 0;
double MyInteger::averageOfIntegers = 0.0;

//Constructor Class definition
MyInteger::MyInteger(int newValue){
    value = newValue;
    MyInteger::numberOfObjects++;
    MyInteger::sumOfObjects += value;
    MyInteger::averageOfIntegers = MyInteger::sumOfObjects*1.0/MyInteger::numberOfObjects;
}

//Getters
int const MyInteger::getValue() { return value; }
double MyInteger::getAverageOfIntegers() { return averageOfIntegers; }

//Even or Odd
bool const MyInteger::isEven(){ return (( getValue()%2 == 0)? true : false); }
bool MyInteger::isOdd(int n){ return ((n%2 != 0)? true : false); }

//Checking equality
bool const MyInteger::equal(int n){ return (( getValue() == n)? true : false); }
bool const MyInteger::equal(MyInteger & myInt){ return equal(myInt.getValue()); }






