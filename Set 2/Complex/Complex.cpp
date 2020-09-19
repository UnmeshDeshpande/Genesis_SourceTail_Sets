#include"complex.h"
#include<iostream>

Complex::Complex():
    m_real(0),m_imag(0){

}
Complex::Complex(int a,int b):
    m_real(a),m_imag(b){

}
Complex::Complex(int n):
    m_real(n){

}
Complex Complex::operator+(const Complex &ref)
{
    int i = m_imag + ref.m_imag;
    int r = m_real + ref.m_real;
    return Complex(r,i);
}
Complex Complex::operator-(const Complex &ref)
{
    int i = m_imag - ref.m_imag;
    int r = m_real - ref.m_real;
    return Complex(r,i);
}
Complex Complex::operator*(const Complex &ref)
{
    int i = m_imag * ref.m_imag;
    int r = m_real * ref.m_real;
    return Complex(r,i);
}
Complex& Complex::operator++(){
++m_imag;
return *this;
}
Complex Complex::operator++(int n2){
    Complex C(*this);
    ++m_real;
    return C;
}

bool Complex::operator == (const Complex &ref){
return m_real == ref.m_real&&m_imag==ref.m_imag;

}
void Complex::display()
{
    std::cout<<m_real<<","<<m_imag<<"\n";
}
float Complex::getimag()
{
    return m_imag;
}
float Complex::getreal()
{
    return m_real;
}

