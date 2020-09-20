#include "distance.h"
#include <gtest/gtest.h>
TEST(distance,Test1) {
    distance d1(10,20);
    EXPECT_EQ(10,d1.get_feet());
    EXPECT_EQ(20,d1.get_inch());
}
