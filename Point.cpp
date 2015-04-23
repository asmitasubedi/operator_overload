/*
Author Asmita Subedi
Roll No. 0346'A'
To implement operator overloading using Point Class
*/

#include<iostream>
#include"Point.h"

using namespace std;

Point:: Point (int x, int y)
{
    setXY(x,y);
}

Point:: Point ()
{
    setXY(0,0);
}

void Point::setX (int x)
{
    this->x = x;
}

void Point::setY(int y)
{
    this->y = y;
}

void Point::setXY(int x, int y)
{
    setX(x);
    setY(y);
}

int Point :: getX()
{
    return x;
}

int Point :: getY()
{
    return y;
}

void Point:: print()
{
    cout<<"\n(" <<getX() <<","<< getY()<< ")\n";
}

Point Point:: operator+(Point p)const
{
     return Point (x +p.getX(), y+p.getY());
}
