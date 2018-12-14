#include <iostream>
#include <string>
using namespace std;

#ifndef NEW_ZADANIE_NEW_ISPYTANIE_CLASSP_H
#define NEW_ZADANIE_NEW_ISPYTANIE_CLASSP_H

class Point {
private:
    int x,y;
public:
    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    Point(int x, int y);
};

class Point_GoldEdition: public Point{
private:
    int z, t;
public:
    int getZ() const;

    void setZ(int z);

    int getT() const;

    void setT(int t);

    Point_GoldEdition (int x,int y,int z,int t);

    float Velocity (Point_GoldEdition A, Point_GoldEdition B);

    void Print();

    float Path();

    float SelfVelocity();
};

#endif //NEW_ZADANIE_NEW_ISPYTANIE_CLASSP_H
