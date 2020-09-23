#include"stack.cpp"
#include<gtest/gtest.h>
TEST(a,b){
	Stack<int> p1(3);
	p1.push(5);
	p1.push(6);
	p1.push(7);
	ASSERT_EQ(7,p1.pop());
}
int main(int argc, char **argv)
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
