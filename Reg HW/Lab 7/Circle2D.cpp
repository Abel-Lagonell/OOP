#include "Circle2D.h"
#include <cmath>

int Circle2D::numberofCircles = 0;

//Static Get functions
double const Circle2D::getX(){return x;}
double const Circle2D::getY(){return y;}
double const Circle2D::getRadius(){return radius;}
int Circle2D::getNumberOfCircles(){return numberofCircles;}

//Constructors
Circle2D::Circle2D(double new_x, double new_y, double new_rad){
    x = new_x;
    y = new_y;
    radius = new_rad;
    numberofCircles ++;
}
Circle2D::Circle2D(const Circle2D &circle){
    x = circle.x;
    y = circle.y;
    radius = circle.radius;
    numberofCircles ++;
}

//Destructor
Circle2D::~Circle2D(){ numberofCircles--; }    

//Overlapping
bool const Circle2D::overlaps(const Circle2D &circle){
    return ((sqrt(pow(x-circle.x,2)+pow(y-circle.y,2))) < (radius + circle.radius));
}