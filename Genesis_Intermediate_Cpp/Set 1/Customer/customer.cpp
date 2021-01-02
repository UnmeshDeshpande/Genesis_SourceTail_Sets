#include<iostream>
#include"customer.h"

Customer::Customer():
    m_custid(0),m_phone(0),m_type(0),m_custname(0),m_balance(0){

}
Customer::Customer(int id,int no,std::string type,std::string name,double bal):
    m_custid(id),m_phone(no),m_type(type),m_custname(name),m_balance(bal){

    }
Customer::Customer(const Customer &c):
    m_custid(c.m_custid),m_phone(c.m_phone),m_type(c.m_type),m_custname(c.m_custname),m_balance(c.m_balance){

    }
    double Customer::credit(double amount)
    {
        m_balance += amount;
        return amount;
    }
    double Customer::makecall()
    {
        std::cout<<m_phone<<"\n";
        return m_phone;
    }
    double Customer::getbalance()
    {
        std::cout<<m_balance<<"\n";
        return m_balance;
    }
    void Customer::display()
    {
        std::cout<<m_custid<<","<<m_phone<<","<<m_type<<","<<m_custname<<","<<m_balance<<"\n";

    }
