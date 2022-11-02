#ifndef CIRCLE2D_H
#define CIRCLE2D_H

class Circle2D{
private:
    double x,y,radius;    

    static int numberofCircles;

public:
    //Static Get functions
    double const getX();
    double const getY();
    double const getRadius();
    int static getNumberOfCircles();

    //Constructors
    Circle2D(double new_x, double new_y, double new_rad);//Make One
    Circle2D(const Circle2D &circle);//Copy One

    //Destructor
    ~Circle2D();//Increase numberOf    

    //Overlapping
    bool const overlaps(const Circle2D &circle);
};

#endif