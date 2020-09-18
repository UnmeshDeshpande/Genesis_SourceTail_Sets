#include<iostream>
#include"Image.h"

Image::Image():
    m_x(0), m_y(0), m_width(0), m_height(0){

    }
Image::Image(int x,int y,int w,int h):
    m_x(x),m_y(y),m_width(w),m_height(h) {

    }
Image::Image(const Image& ref) :
    m_x(ref.m_x), m_y(ref.m_y), m_width(ref.m_width), m_height(ref.m_height){

    }
void Image::Move(int nx,int ny){
m_x = nx;
m_y = ny;
}
int Image::scale(int sf){
m_width *= sf;
m_height *= sf;
return sf;
}
void Image::Resize(int nw,int nh){
m_width ==  nw;
m_height == nh;
}
void Image::display(){
    std::cout<<m_x<<","<<m_y<<","<<m_width<<","<<m_height<<"\n";
}
