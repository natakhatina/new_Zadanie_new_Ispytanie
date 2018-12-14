#include <iostream>
#include <vector>
#include "headers/ClassP.h"
using namespace std;

int main() {
    srand(time(NULL));

    Point_GoldEdition A(0,0,0,0);
    Point_GoldEdition B(1,2,3,4);
    A.Print();
    B.Print();
    float v=B.Velocity(A,B);
    cout << "Скорость: " <<v<< endl;

    vector<Point_GoldEdition> V;
    float S=0;
    for (int i=0;i<10;i++){
        int x=rand()%200-100;
        int y=rand()%200-100;
        int z=rand()%200-100;
        int t=rand()%1000;
        Point_GoldEdition a(x,y,z,t);
        S=S+a.Path();
        V.push_back(a);
        //cout << V[i]<<" ";
    }

//    for (int i=0;i<10;i++)cout<<V[i]<<" ";
//    cout<<endl;

//vector<Point_GoldEdition>::iterator p=V.begin();
//    while (p!=V.end()){
//        cout<<*p<<" ";
//        p++;
//    }
    return 0;
}