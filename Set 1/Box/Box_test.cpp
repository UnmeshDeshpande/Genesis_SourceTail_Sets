#include<gtest/gtest.h>
#include"box.h"
TEST(Box,ParameterConstructor1) {
    Box a1;
    EXPECT_EQ(0,a1.volume(0,0,0));

}
TEST(Box,ParaConstructor2) {
    Box a1;
    EXPECT_EQ(32,a1.volume(4,4,2));

}

