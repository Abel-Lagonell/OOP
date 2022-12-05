#include "OvernightPackage.h"
#include <string>
#include <iostream>
using namespace std;
using OP = OvernightPackage;

OP::OvernightPackage(const string &name, const string &address, const string &city, const string &state, int zipCode, double weight, double costPerOunce, double extraFeePerOunce) : Package(name,address, city, state,zipCode, weight, costPerOunce){
    setOvernightFeePerOunce(extraFeePerOunce);
}
void OP::setOvernightFeePerOunce(double extrafeePerOunce) {this -> extraFeePerOunce = extrafeePerOunce;}
double OP::calculateCost() const{return weight * (costPerOunce + extraFeePerOunce);}
void OP::printPackageInfo(){
    cout << 
    "---------------------------------------" << endl <<
    "Overnight Day Package ID: " << ID << endl <<  endl << 
    name << endl << 
    address << endl << 
    city << ", " << state << " " << zipCode << endl << endl <<
    "Cost: $" << calculateCost() << endl << 
    "---------------------------------------" << endl;
}