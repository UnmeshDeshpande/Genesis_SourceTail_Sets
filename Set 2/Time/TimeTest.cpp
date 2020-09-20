#include "time.h"
#include <gtest/gtest.h>

TEST(Mytime,Test1) {
    Mytime t1(11,45,12);
    EXPECT_EQ(11,t1.hours());
    EXPECT_EQ(45,t1.minute());
    EXPECT_EQ(12,t1.secs());
}
