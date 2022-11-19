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
public:
    //Priv variables
    double real=0, img=0;

    //Constructors
    Complex(double a, double b);
    Complex(double a);
    Complex();

    //Get function
    double getRealPart() const {return real;}
    double getImaginaryPart() const {return img;} 

    //Gives the complex number as a string
    string toString() const {
        if (getImaginaryPart() == 0)
            return ((getRealPart()>0)? "":"- ") + to_string(std::abs(getRealPart()));
        else
            return ((getRealPart()>0)? "":"- ") + to_string(std::abs(getRealPart())) + ((getImaginaryPart()>0)? " + ":" - ") + to_string(std::abs(getImaginaryPart())) + "i";
    }
    
    //normal math functions
    Complex add(const Complex& a) const {
        double r = getRealPart() + a.getRealPart();
        double i = getImaginaryPart() + a.getImaginaryPart();
        return Complex(r,i);
    }
    Complex subtract(const Complex& a) const{
        double r = getRealPart() - a.getRealPart();
        double i = getImaginaryPart() - a.getImaginaryPart();
        return Complex(r,i);
    }
    Complex multiply(const Complex& x) const{
        double a = getRealPart();
        double b = getImaginaryPart();
        double c = x.getRealPart();
        double d = x.getImaginaryPart();
        double r = a*c - b*d;
        double i = b*c + a*d;
        return Complex(r,i);
    }
    Complex divide(const Complex& x) const{
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
    double operator[](int index) {return ((index==0)? getRealPart():((index ==1)? getImaginaryPart():0));}
    
    //addative and subtractive suffix and prefix
    Complex operator++() {return *this+=Complex(1);}
    Complex operator--() {return *this+=Complex(-1);}
    Complex& operator++(int dummy) {
        Complex temp(getRealPart(),getImaginaryPart());
        *this += Complex(1);
        return temp;
    }
    Complex& operator--(int dummy) {
        Complex temp(getRealPart(),getImaginaryPart());
        *this += Complex(-1);
        return temp;
    }
    
    //Change of sign
    Complex operator+() {return *this;}
    Complex operator-() {return this->multiply(Complex(-1));}
};

//in and out operator
ostream& operator<<(ostream& out, const Complex& a){
    cout << a.toString();
    return out;
}
istream& operator>>(istream& in, Complex& a){
    cout << "Enter number a and b for (a + bi): ";
    cin >> a.real >> a.img;
    return in;
}

//normal math operators
Complex operator+(const Complex& a, const Complex& b) {return a.add(b);}
Complex operator-(const Complex& a, const Complex& b) {return a.subtract(b);}
Complex operator*(const Complex& a, const Complex& b) {return a.multiply(b);}
Complex operator/(const Complex& a, const Complex& b) {return a.divide(b);}

//Constructors
Complex::Complex(double a, double b) {real = a; img = b;}
Complex::Complex(double a) {real = a; img = 0;}
Complex::Complex(){real = 0; img = 0;}

int main(){
    double r,i;

    Complex c0 = Complex();
    Complex c1, c2, cx1, cx2;
    
    cout << 
        "1. Test constructors: " << endl <<
        "1.1 Create a complex number c0 with no-arg constructor Complex(): " << endl <<
        "c0 = " << c0 << ", its the real part Re(c0) = " << c0.getRealPart() << ", its imaginary part Im(c0) = " << c0.getImaginaryPart() << ", its absolute value |c0| = " << c0.abs() << endl <<
        "1.2 Create a complex number c1 with constructor Complex(a): " << endl;
    cout << "Enter number a: ";
    cin >> r;
    c1 = Complex(r);
    cout << 
        "c1 = " << c1 << ", its the real part Re(c1) = " << c1.getRealPart() << ", its imaginary part Im(c1) = " << c1.getImaginaryPart() << ", its absolute value |c1| = " << c1.abs() << endl <<
        "1.3 Create a complex number c2 with constructor Complex(a,b): " << endl;
    cout << "Enter number a b: ";
    cin >> r >> i;
    c2 = Complex(r,i);
    cout << 
        "c2 = " << c2 << ", its the real part Re(c2) = " << c2.getRealPart() << ", its imaginary part Im(c2) = " << c2.getImaginaryPart() << ", its absolute value |c2| = " << c2.abs() << endl << endl <<
        "2. Test overloaded stream insertion operator >> and extraction operator <<: " << endl << 
        "Enter two complex numbers following the prompts:" << endl <<
        "Enter the first complex number cx1 with (cin >> cx1):";
    cin >> cx1;
    cout << "\'cout << cx1\' prints " << cx1 << endl;
    cout << "Enter the second complex number cx2 with (cin >> cx2):";
    cin >> cx2;
    cout << 
        "\'cout << cx2\' prints " << cx2 << endl << endl <<
        "3. Test overloaded arithmetic operators +,-,*,/:" << endl <<
        "(" << cx1 << ") + (" << cx2 << " = " << (cx1 + cx2) << endl <<
        "(" << cx1 << ") - (" << cx2 << " = " << (cx1 - cx2) << endl <<
        "(" << cx1 << ") * (" << cx2 << " = " << (cx1 * cx2) << endl <<
        "(" << cx1 << ") / (" << cx2 << " = " << (cx1 / cx2) << endl << endl <<
        "4. Test overloaded augmented arithmetic operators +=,-=,*=,/=:" << endl << 
        "cx1 = " << cx1 << "; cx2 = " << cx2 << endl;
    cx2 += cx1;
    cout << "( cx2 += cx1 ); cx2 = " << cx2 << endl;
    cx2 -= cx1;
    cout << "( cx2 -= cx1 ); cx2 = " << cx2 << endl;
    cx2 *= cx1;
    cout << "( cx2 *= cx1 ); cx2 = " << cx2 << endl;
    cx2 /= cx1;
    cout << 
        "( cx2 /= cx1 ); cx2 = " << cx2 << endl << endl <<
        "5. Test overloaded unary operators:" << endl <<
        "5.1 Test overloaded sign operators +,-" << endl <<
        "cx1 = " << cx1 << endl <<
        "+cx1 = " << +cx1 << endl <<
        "-cx1 = " << -cx1 << endl <<
        "5.2 Test overloaded prefixes ++, --:" << endl <<
        "cx1 = " << cx1 << endl <<
        "++cx1; cx1 = " << ++cx1 << endl <<
        "--cx1; cx1 = " << --cx1 << endl <<
        "5.2 Test overloaded postfixes ++,--:" << endl <<
        "cx1 = " << cx1 << endl <<
        "\'cout << cx1++;\' prints " << cx1++ << endl <<
        "\'cout << cx1--;\' prints " << cx1-- << endl <<
        "cx1 = " << cx1 << endl << endl <<
        "6. Test overloaded subscript operator []:" << endl <<
        "cx1 = " << cx1 << endl <<
        "cx1[0] = " << cx1[0] << endl <<
        "cx1[1] = " << cx1[1] << endl <<
        "(cx2[0] == cx2.getRealPart()) = " << (cx2[0] == cx2.getRealPart()) << endl <<
        "(cx2[1] == cx2.getImaginaryPart()) = " << (cx2[1] == cx2.getImaginaryPart()) << endl << endl <<
        "7. Test implicit conversion from double to Complex:" << endl <<
        "cx2 = " << cx2 << endl <<
        "3 + cx2 = " << 3.0 + cx2 << endl <<
        "3.4 + cx2 = " << 3.4 + cx2 << endl;
    return 0;
}
