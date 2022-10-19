/**
 * Title                Checking for rectangles
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 07:50 PM
 * Modification Date:   10/18/2022 @ 10:20 AM
 * Description:         Make a rectangle, check if a point is inside the rectangle, check if a rectangle overlaps.
*/
#include <iostream>
using namespace std;

class Rectangle2D{

private:
    double x,y,height,width;

public:

    //Getter functions
    double getX() const { return x; }
    double getY() const { return y; }
    double getHeight() const{ return height; }
    double getWidth() const{ return width; }

    //Setter functions
    void setX(double newX){ x = newX; }    
    void setY(double newY){ y = newY; }
    void setHeight(double newH){ height = newH; }
    void setWidth(double newW){ width = newW; }

    //Empty constructor
    Rectangle2D(){
        x = 0.0;
        y = 0.0;
        height = 0.0;
        width = 0.0;
    }

    //Filled Constructor
    Rectangle2D(double newX, double newY, double newH, double newW){
        x = newX;
        y = newY;
        height = newH;
        width = newW;
    }

    //Checks if point is in rectangle
    bool contains(double x, double y) const{
        bool bx = x >= getX()-(getWidth()/2) && x <= getX()+(getWidth()/2);
        bool by = y >= getY()-(getHeight()/2) && y <= getY()+(getHeight()/2);
        
        return (bx && by);
    }
    //Checks if given rectangle is in the calling rectangle
    bool contains(const Rectangle2D &r) const{
        bool bx = r.getX()-(r.getWidth()/2) >= getX()-(getWidth()/2) && r.getX()+(r.getWidth()/2) <= getX()+(getWidth()/2);
        bool by = r.getY()-(r.getHeight()/2) >= getY()-(getHeight()/2) && r.getY()+(r.getHeight()/2) <= getY()+(getHeight()/2);

        return (bx && by);
    }
    //Checks if rectangle is overlapping with another rectangle
    bool overlaps(const Rectangle2D &r) const{
        //The x and y coordinates of given rectangle
        double x1 = r.getX()-(r.getWidth()/2);
        double y1 = r.getY()-(r.getHeight()/2);
        double x2 = r.getX()+(r.getWidth()/2);
        double y2 = r.getY()+(r.getHeight()/2);

        //Checks if the four coordinates of rectangle are inside the calling rectangle
        bool bp1 = contains(x1, y1);
        bool bp2 = contains(x1, y2);
        bool bp3 = contains(x2, y1);
        bool bp4 = contains(x2, y2);

        //If at least one of the four coordinates is inside the calling rectangle then the given rectangle is overlapping
        return ((bp1 != bp2) != (bp3 != bp4));
    }
};

int main(){

    //Initializing the three rectangles
    Rectangle2D r1(2,2,5.5,4.9);
    Rectangle2D r2(4,5,10.5,3.2);
    Rectangle2D r3(3,5,2.3,5.4);

    //Printing out the three outcomes
    cout << "The point " << (r1.contains(3,3) ? "is" : "is not") << " in r1 " << endl;
    cout << "r2 " << (r1.contains(r2) ? "is" : "is not") << " in r1" << endl;
    cout << "r3 " << (r1.overlaps(r3) ? "is" : "is not") << " overlapping r1" << endl;

    return 0;
}