#include<gtest/gtest.h>
#include"Postpaid.h"
#include"Prepaid.h"
#include"Customer.h"

TEST(PostpaidCustomer,testPostpaid)
{
PostpaidCustomer c1("345","123","2650",8520,0);
c1.makeCall(20);
EXPECT_EQ(8500,c1.getBalance());
}
TEST(PrepaidCustomer,testPrepaid)
{
PrepaidCustomer c1("345","123","2650",8120,0);
c1.credit(900);
EXPECT_EQ(9020,c1.getBalance());
}
