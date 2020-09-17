#include<iostream>
#include "account.h"
#include<string>
Account::Account() :
    m_accNumber(0), m_accName(""), m_balance(0) {

}
Account::Account(int id, std::string name, double bal) :
  m_accNumber(id), m_accName(name), m_balance(bal) {

}
Account::Account(const Account& ref) :
        m_accNumber(ref.m_accNumber), m_accName(ref.m_accName),
                                              m_balance(ref.m_balance) {

}
void Account::credit(double amount) {
  m_balance += amount;
}
void Account::debit(double amount) {
  //min balance check
  m_balance -= amount;
}
int Account::getCustomerId() {
  return m_accNumber;
}
std::string Account::getCustomerName() {
  return m_accName;
}
double Account::getBalance() const {
    return m_balance;
}
void Account::display() {
    std::cout << m_accNumber << "," << m_accName << ","
                                         << m_balance << "\n";
}
