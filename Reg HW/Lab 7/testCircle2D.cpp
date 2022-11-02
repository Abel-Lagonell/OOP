/**
 * Title                Circles
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/19/2022 @ 10:00 AM
 * Modification Date:   10/19/2022 @ 11:33 AM
 * Description:         Class that creates circles and checks for overlap
*/

#include "Circle2D.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    //Dynamically Allocation of a Object
    Circle2D *pCir1;
    pCir1 = new Circle2D(2,2,5.5);
    cout << "pCir1 is created with center at (2,2) and radius of 5.5" <<endl; 

    //Create a Circle
    Circle2D cir2 = Circle2D(-6,-3,1.5);
    cout << "cir2 is created with center at (-6,3) and radius of 1.5" <<endl;

    //Get the number of Circles
    cout << "The current number of circles is " << Circle2D::getNumberOfCircles() << endl;
    
    Circle2D cir3 = Circle2D(cir2);
    cout << "cir3 is copied from cir2 with center at (-6,3) and radius of 1.5" <<endl;

    //Get the number of Circles and check for overlaps
    cout << "The current number of circles is " << cir3.getNumberOfCircles() << endl;
    cout << "pCir1 overlaps cir2 = " << pCir1->overlaps(cir2) << endl;
    cout << "cir3 overlaps cir2 = " << cir3.overlaps(cir2) << endl;

    //Deletion of Dynamic allocation of the object
    delete pCir1;
    cout << "pCir1's memory is freed.\n";

    //Get the number of Circles
    cout << "The current number of circles is " << Circle2D::getNumberOfCircles() << endl;
    
    return 0;
}