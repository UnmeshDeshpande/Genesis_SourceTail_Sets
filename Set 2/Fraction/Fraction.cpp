#include<iostream>
#include "Fraction.h"

Fraction::Fraction(): m_numerator(0),m_denominator(0) {}
Fraction::Fraction(int num,int den):m_numerator(num),m_denominator(den) {}
Fraction::Fraction(int frac):m_numerator(frac) {}
Fraction Fraction::operator+(const Fraction &ref) {

    int deno = m_denominator + ref.m_denominator;
    int numer = m_numerator+ref.m_numerator;
    return Fraction(numer, deno);
}
Fraction Fraction::operator-(const Fraction &ref) {
    int deno = m_denominator - ref.m_denominator;
    int numer = m_numerator - ref.m_numerator;
    return Fraction(numer, deno);
}
Fraction Fraction::operator*(const Fraction &ref) {
    int deno = m_denominator * ref.m_denominator;
    int numer = m_numerator * ref.m_numerator;
    return Fraction(numer, deno);
}
Fraction& Fraction:: operator++() {
    ++m_denominator; // TODO: mm > 60
    return *this;}
Fraction Fraction:: operator++(int dummy) {
    Fraction orig(*this);
    ++m_numerator; // TODO: mm > 60
    return orig;
  }
bool Fraction::operator==(const Fraction &ref) {
    return m_numerator == ref.m_numerator && m_denominator == ref.m_denominator;
}
 bool Fraction::operator< (const Fraction &ref){}
 bool Fraction::operator> (const Fraction &ref){}

int Fraction::getnum(){
return m_numerator;
}

int Fraction::getden(){
return m_denominator;
}

void Fraction::display() {
    std::cout<<m_numerator<<"/"<<m_denominator<<"\n";
}
