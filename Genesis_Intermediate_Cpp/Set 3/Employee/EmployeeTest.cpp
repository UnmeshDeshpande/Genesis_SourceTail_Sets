#include<gtest/gtest.h>
#include"Employee.h"
#include"Manager.h"
#include"Trainee.h"
#include"Employee.h"
#include"Engineer.h"

TEST(Engineer,Test1)
{
    Engineer e1("engg","unmesh", 4856, 789, 45);
    e1.appraisal(100);
    EXPECT_EQ(4956,e1.payroll());
}

