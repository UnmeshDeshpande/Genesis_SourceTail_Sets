#include<gtest/gtest.h>
#include "triangle.h"
#include "polygon.h"
#include "shape.h"
#include <math.h>
#include"rectangle.h"
#include "circle.h"
TEST(shape,test1)
{
    Polygon *t;
    t=new Triangle(3,4,5);
      EXPECT_EQ(12,t->circumference());
       ASSERT_EQ(6,t->area());
       Polygon *p;
       p=new Rectangle(1,2);
        EXPECT_EQ(3,p->circumference());
       ASSERT_EQ(2,p->area());
       IShape *t1;
       t1=new Circle(3.0);
        EXPECT_EQ(18.84,t1->circumference());
}
