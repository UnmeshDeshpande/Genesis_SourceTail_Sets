#include<iostream>
#include"Box.h"

Box::Box():
    m_length(0), m_breadth(0), m_height(0){

}
Box::Box(int l, int b, int h):
    m_length(l), m_breadth(b), m_height(h) {

}
Box::Box(const Box & ref):
    m_length(ref.m_length), m_breadth(ref.m_breadth), m_height(ref.m_height){

    }
    void Box::display() {
        std::cout<<m_length<<","<<m_breadth<<","<<m_height<<"\n";
    }
    int Box::volume(int m_length,int m_breadth,int m_height){
        int m_volume = m_length*m_breadth*m_height;

    }
