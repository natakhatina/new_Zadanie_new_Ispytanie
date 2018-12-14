#include <iostream>
#include <string>
#include <math.h>
#include "../headers/ClassP.h"
using namespace std;

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}

Point::Point(int x, int y) : x(x), y(y) {}

int Point_GoldEdition::getZ() const {
    return z;
}

void Point_GoldEdition::setZ(int z) {
    Point_GoldEdition::z = z;
}

int Point_GoldEdition::getT() const {
    return t;
}

void Point_GoldEdition::setT(int t) {
    Point_GoldEdition::t = t;
}

Point_GoldEdition::Point_GoldEdition(int x, int y, int z,int t):Point(x, y) {
    Point_GoldEdition::z=z;
    Point_GoldEdition::t=t;
}

float Point_GoldEdition::Velocity(Point_GoldEdition A, Point_GoldEdition B) {
    float S=sqrt(pow(B.getX()-A.getX(),2)+pow(B.getY()-A.getY(),2)+pow(B.getZ()-A.getZ(),2));
    float t=B.getT()-A.getT();
    return S/t;
}

void Point_GoldEdition::Print() {
    cout << "Коор-ты точки:"<<endl;
    cout << "х:"<< getX()<< endl;
    cout << "y:"<< getY()<< endl;
    cout << "z:"<< z<< endl;
    cout << "Момент времени t, в который точка зарегистрирована:"<<  t<< endl;
}

float Point_GoldEdition::Path() {
    float S=sqrt(pow(getX(),2)+pow(getY(),2)+pow(z,2));
    return S;
}

float Point_GoldEdition::SelfVelocity() {
    float S=Path();
    return S/t;
}
