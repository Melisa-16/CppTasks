#ifndef RECT_H
#define RECT_H

class Rectangle {
private:
    double x1;
    double y1;
    double x2;
    double y2;
    double x3; 
    double y3;
    double x4; 
    double y4;
    double length;
    double width;
public:
    Rectangle(double, double,
              double, double,
              double, double,
              double, double);
    void setCoordinates(double, double,
                        double, double,
                        double, double,
                        double, double);      
    void setLength();
    void setWidth();

    double getLength();
    double getWidth();
    double perimeter();
    double area();
    double distance(double, double, double, double);
    
    bool rectangleChecker();
    bool squareChecker();
};
#endif