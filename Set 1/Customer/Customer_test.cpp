#include<gtest/gtest.h>
#include"customer.h"

TEST(Customer,ParaConst){
Customer c1(1234,4354,"Type1","Unmesh",2345.98);
    EXPECT_EQ(4354,c1.makecall());
    EXPECT_EQ(2345.98,c1.getBalance());
    EXPECT_EQ(200.21,c1.credit(200.21));
}
