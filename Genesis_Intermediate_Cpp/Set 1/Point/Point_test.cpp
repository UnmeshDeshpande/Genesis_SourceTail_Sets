#include<gtest/gtest.h>
#include"Point.h"
TEST(Point,ParameterizedConstructor) {
    Point p1(11,23);
    EXPECT_EQ(25,p1.distanceFromOrigin());
    EXPECT_EQ(1,p1.quadrant());
    EXPECT_EQ(0,p1.isOrigin());
    EXPECT_EQ(0,p1.isOnXaxis());
    EXPECT_EQ(0,p1.isOnYaxis());
}

