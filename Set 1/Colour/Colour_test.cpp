#include"Colour.h"
#include<gtest/gtest.h>
TEST(Colour,ParaConstructor){
    Colour c1(100,23,11);
    EXPECT_EQ(155,c1.invert());
}
