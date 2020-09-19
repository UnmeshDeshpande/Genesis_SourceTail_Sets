#include<gtest/gtest.h>
#include"Complex.h"

TEST(Complex,Default){
Complex a1(12,21);
EXPECT_EQ(12.0,a1.getreal());
EXPECT_EQ(21.0,a1.getimag());
}
