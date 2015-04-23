/*
Author Asmita Subedi
Roll No. 0346'A'
To implement operator overloading using Point Class
*/

#include<iostream>

#ifndef POINT_H
#define POINT_H

using namespace std;

class Point{

    private:
        int x, y;

    public:
        Point(int x, int y);
        Point();
        void setX(int);
        int getX();
        void setY(int);
        int getY();
        void setXY(int, int);

        void print();
        Point operator+(Point p)const;

};
#endif // POINT_H
