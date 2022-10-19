/**
 * Title                Hexagonal Area
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 01:32 PM
 * Modification Date:   10/17/2022 @ 01:38 PM
 * Description:         Given side of a regular hexagon output area 
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    //Declare Variables
    double side,num,den;

    //Prompt for User input
    cout << "Enter the side: ";
    cin >> side;

    //NUMerator and DENominator of the fraction
    num = 6 * pow(side,2);
    den = 4 * tan(M_PI/6);

    //Outputting the area of the hexagon
    cout << "The area of the hexagon is " << setprecision(2) << fixed << num/den << endl;

    return 0;
}