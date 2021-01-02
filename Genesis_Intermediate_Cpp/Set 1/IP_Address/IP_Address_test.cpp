#include"ip_address.h"
#include<gtest/gtest.h>
//#include<iostream>
TEST(IPAddress,Test1)
{
    IPAddress I1;
    EXPECT_EQ("C",I1.getIPClass(000));

}
