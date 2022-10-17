/**
 * Title                Car Calculations
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 10:00 AM
 * Modification Date:   10/17/2022 @ 10:16 AM
 * Description:         Calculate driving distance, mpg, price per gallon, cost of driving, given mpg, ppg, and distance of trip by user
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //Declaring the variables in prompt
    double distance, mpg, ppg, price;

    //Prompts User to enter the information for calculations
    cout << "Enter the driving distance: ";
    cin >> distance;
    cout << "Enter the miles per gallon: ";
    cin >> mpg;
    cout << "Enter the price per gallon: ";
    cin >> ppg;

    //Calculate the price using rounding and print out the result
    price = round(((distance/mpg)*ppg)*100)/100;
    cout << "The cost of driving is $" << price << endl;

    return 0;
}