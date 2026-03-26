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

    char perimeterCharacter;
    char fillCharacter;
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
    void draw();
    void setFillCharacter(char);
    void setPerimeterCharacter(char);

    double getLength();
    double getWidth();
    double perimeter();
    double area();
    double distance(double, double, double, double);
    double minimum(double,double,double,double);
    double maximum(double,double,double,double);

    bool rectangleChecker();
    bool squareChecker();
};
#endif