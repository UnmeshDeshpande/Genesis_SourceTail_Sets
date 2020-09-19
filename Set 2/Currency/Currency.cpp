#include"Currency.h"
#include<iostream>
using namespace std;

Currency::Currency():
    m_rupees(0),m_paise(0){

}
Currency::Currency(int rs,int ps):
    m_rupees(rs),m_paise(ps){

}
Currency Currency::operator+(const Currency &ref)
{
    int r = m_rupees + ref.m_rupees;
    int p = m_paise + ref.m_paise;
    return Currency(r,p);
}
Currency Currency::operator-(const Currency &ref)
{
    int r = m_rupees - ref.m_rupees;
    int p = m_paise - ref.m_paise;
    return Currency(r,p);
}
Currency& Currency::operator++(){
++m_paise;
return *this;
}
Currency Currency::operator++(int n2){
    Currency C(*this);
    ++m_rupees;
    return C;
}
bool Currency::operator == (const Currency &ref){
return m_rupees == ref.m_rupees&&m_paise==ref.m_paise;

}
void Currency::display()
{
    std::cout<<m_rupees<<","<<m_paise<<"\n";
}
int Currency::getpaise()
{
    return m_paise;
}
int Currency::getrupees()
{
    return m_rupees;
}

