//#IFNDEF _ACCOUNT_H_
//#DEFINE _ACCOUNT_H_
#include<string>
class Account
{
    int m_accNumber;
    double m_balance;
    std::string m_accName;
public:
    Account();
    Account(int,std::string,double);
    Account(int,int);
    Account(const Account &);
    void debit (double);
    void credit (double);
    int getCustomerId();
    std::string getCustomerName();
    double getBalance() const;
    void display();
};
//#ENDIF
