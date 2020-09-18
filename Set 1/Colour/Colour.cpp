#include<iostream>
#include"Colour.h"

Colour::Colour():
    m_r(0),m_g(0),m_b(0){

    }
Colour::Colour(int r,int g,int b):
    m_r(r),m_g(g),m_b(b){

    }
Colour::Colour(colour_t){

}
Colour::Colour(int r):
    m_r(r){

    }
int Colour::invert()
{
    m_r = 255 - m_r;
    m_g = 255 - m_g;
    m_b = 255 - m_b;
    return m_r;
}
void Colour::display()
{
    std::cout<<m_r<<","<<m_g<<","<<m_b<<"\n";
}
