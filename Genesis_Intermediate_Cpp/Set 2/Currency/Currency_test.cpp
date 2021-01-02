#include<gtest/gtest.h>
#include"Currency.h"

TEST(Currency,Default){
Currency m1(12,21);
EXPECT_EQ(12,m1.getrupees());
EXPECT_EQ(21,m1.getpaise());
}

