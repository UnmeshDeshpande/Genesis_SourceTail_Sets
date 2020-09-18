#include"image.h"
#include<gtest/gtest.h>
TEST(Image,ParaConstructor){
    Image i1(1,2,10,23);
    EXPECT_EQ(2,i1.scale(2));
}
