#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;  
    double width;   
public:
    
    Rectangle(double len = 0, double wid = 0);

   
    double getLength() const;
    double getWidth() const;

    
    void setLength(double len);
    void setWidth(double wid);

    
    double getArea() const;
};


#endif
