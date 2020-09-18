#include"point.h"
#include<iostream>
#include<math.h>

Point::Point():
    m_x(0),m_y(0){

    }
Point::Point(int x,int y):
    m_x(x),m_y(y){

    }
Point::Point(const Point& ref):
    m_x(ref.m_x), m_y(ref.m_y){

    }
Point::distanceFromOrigin()
{
    int d = sqrt((m_x*m_x)+(m_y*m_y));
    return d;
}
Point::quadrant()
{
    if(m_x > 0 && m_y > 0)
    {
        return 1;
    }
    if(m_x < 0 && m_y > 0)
    {
        return 2;
    }
    if(m_x > 0 && m_y < 0)
    {
        return 3;
    }
    if(m_x > 0 && m_y > 0)
    {
        return 4;
    }
}
Point::isOrigin()
{
    if(m_x == 0 && m_y == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Point::isOnXaxis()
{
    if(m_x != 0 && m_y == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Point::isOnYaxis()
{
    if(m_x == 0 && m_y != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Point::display()
{
    std::cout<<"/n";
}

