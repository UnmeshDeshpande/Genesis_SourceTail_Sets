#include<gtest/gtest.h>
#include "Fraction.h"

TEST(Fraction,Test1)
{
Fraction f1(12,44);
EXPECT_EQ(12,f1.getnum());
EXPECT_EQ(44,f1.getden());
}


