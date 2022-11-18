/**
 * Title                Complex ndoubleumbers
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       11/18/2022 @ 11:43 AM
 * Modification Date:   11/18/2022 @ 04:10 PM
 * Description:         Complex number math
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Complex{
private:
    //Priv variables
    double real=0, img=0;

public: 
    //Constructors
    Complex(double a, double b);
    Complex(double a);
    Complex();

    //Get function
    double getRealPart() const {return real;}
    double getImaginaryPart() const {return img;} 

    //Gives the complex number as a string
    string toString(){
        if (getImaginaryPart() == 0)
            return to_string(getRealPart());
        else{
            string var = string(to_string(getRealPart()) + ((getImaginaryPart()>0)? " + ":" - ") + to_string(sqrt(pow(getImaginaryPart(),2))) + "i");
            return var;
        }
    }
    
    //normal math functions
    Complex add(Complex a) const {
        double r = getRealPart() + a.getRealPart();
        double i = getImaginaryPart() + a.getImaginaryPart();
        return Complex(r,i);
    }
    Complex subtract(Complex a) const{
        double r = getRealPart() - a.getRealPart();
        double i = getImaginaryPart() - a.getImaginaryPart();
        return Complex(r,i);
    }
    Complex multiply(Complex x) const{
        double a = getRealPart();
        double b = getImaginaryPart();
        double c = x.getRealPart();
        double d = x.getImaginaryPart();
        double r = a*c - b*d;
        double i = b*c + a*d;
        return Complex(r,i);
    }
    Complex divide(Complex x) const{
        double a = getRealPart();
        double b = getImaginaryPart();
        double c = x.getRealPart();
        double d = x.getImaginaryPart();
        double r = (a*c - b*d)/(pow(c,2)+pow(d,2));
        double i = (b*c + a*d)/(pow(c,2)+pow(d,2));
        return Complex(r,i);
    }
    double abs(){
        return (sqrt(pow(getRealPart(),2) + pow(getImaginaryPart(),2)));
    }
    
    //assignment math operators
    Complex& operator+=(const Complex& a) {return *this = add(a);}
    Complex& operator-=(const Complex& a) {return *this = subtract(a);}
    Complex& operator*=(const Complex& a) {return *this = multiply(a);}
    Complex& operator/=(const Complex& a) {return *this = divide(a);}
    
    //Index operator
    double operator[](int index) {return ((index==0)? getRealPart():getImaginaryPart());}
    
    //addative and subtractive suffix and prefix
    Complex& operator++() {return *this = add(Complex(1));}
    Complex& operator--() {return *this = add(Complex(-1));}
    Complex& operator++(int dummy) {
        Complex temp(getRealPart(),getImaginaryPart());
        *this = add(Complex(1));
        return temp;
    }
    Complex& operator--(int dummy) {
        Complex temp(getRealPart(),getImaginaryPart());
        *this = add(Complex(-1));
        return temp;
    }
    
    //Change of sign
    Complex operator+() {return *this;}
    Complex operator-() {return this->multiply(Complex(-1));}

    //in and out operator
    ostream& operator<<(ostream& out){
        cout << toString();
        return out;
    }
    istream& operator>>(istream& in){
        cout << "Enter a real part: ";
        in >> this->real;
        cout << "\n Enter a imaginary part: ";
        in >> this->img;
    }

};

//normal math operators
Complex operator+(Complex& a, Complex& b) {return a.add(b);}
Complex operator-(Complex& a, Complex& b) {return a.subtract(b);}
Complex operator*(Complex& a, Complex& b) {return a.multiply(b);}
Complex operator/(Complex& a, Complex& b) {return a.divide(b);}

//Constructors
Complex::Complex(double a, double b) {real = a; img = b;}
Complex::Complex(double a) {real = a; img = 0;}
Complex::Complex(){real = 0; img = 0;}

int main(){

    return 0;
}
