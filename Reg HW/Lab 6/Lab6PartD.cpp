/**
 * Title                Checking for rectangles
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Version:             0.0.1a
 * Creation date:       10/17/2022 @ 07:50 PM
 * Modification Date:   10/17/2022 @ 07: PM
 * Description:         Make a rectangle, check if a point is inside the rectangle, check if a rectangle overlaps.
*/
#include <iostream>
using namespace std;


class Rectangle2D{

private:
    double x,y,height,width;

public:

    //Getter functions
    double getX() const {
        return x;
    }
    double getY() const{
        return y;
    }
    double getHeight() const{
        return height;
    }
    double getWidth() const{
        return width;
    }

    //Setter functions
    void setX(double _x){
        x = _x;
    }    
    void setY(double _y){
        y = _y;
    }
    void setHeight(double _h){
        height = _h;
    }
    void setWidth(double _w){
        width = _w;
    }

    Rectangle2D(){
        x = 0.0;
        y = 0.0;
        height = 0.0;
        width = 0.0;
    }

    Rectangle2D(double _x, double _y, double _h, double _w){
        x = _x;
        y = _y;
        height = _h;
        width = _w;
    }

    bool contains(double x, double y) const{
        bool bx = x >= getX()-(getWidth()/2) || x <= getX()+(getWidth()/2);
        bool by = y >= getY()-(getHeight()/2) || y <= getY()+(getHeight()/2);
        
        return (bx && by);
    }
    bool contains(const Rectangle2D &r) const{
        bool bx = r.getX()-(r.getWidth()/2) >= getX()-(getWidth()/2) && r.getX()+(getWidth()/2) <= getX()+(getWidth()/2);
        bool by = r.getY()-(r.getHeight()/2) >= getY()-(getHeight()/2) && r.getY()+(r.getHeight()/2) <= getY()+(getHeight()/2);

        return (bx && by);
    }
    bool overlaps(const Rectangle2D &r) const{
        
    }
};

int main(){

    Rectangle2D r1(2,2,5.5,4.9);
    Rectangle2D r2(4,5,10.5,3.2);
    Rectangle2D r3(3,5,2.3,5.4);

    cout << "Contains point: " << r1.contains(3,3) << endl;
    cout << "Contains rectangle " << r1.contains(r2) << endl;
    //r1.overlaps(r3);


    return 0;
}