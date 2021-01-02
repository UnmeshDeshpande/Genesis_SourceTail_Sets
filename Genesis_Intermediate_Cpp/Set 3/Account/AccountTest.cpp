#include<gtest/gtest.h>
#include"account.h"
#include"CreditAccount.h"
#include"SavingsAccount.h"
using namespace std;

TEST(CreditAccount,DefaultConstructor) {
   // AccountBase *ca1;
   // ca1 = new CreditAccount("qwer","tyuiop",12345);
    CreditAccount ca1("abc","xyz",1234);
    EXPECT_EQ(1222,ca1.debit(12));
    EXPECT_EQ(1234,ca1.credit(12));
    //EXPECT_EQ(0.0,a1.getCustomerId());
    //EXPECT_EQ(0,a1.getCustomerName().length());
}
