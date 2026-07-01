#include "gmock/gmock.h"
#include "baseball.cpp"
#include <vector>

using std::vector;
class BaseballFixture : public testing::Test
{
public:
	baseball base;
	vector<int> expect;
};

TEST_F(BaseballFixture, Test0)
{
	expect = { 0,0 };
	EXPECT_THROW( base.playgame("4562"), std::length_error);
}

TEST_F(BaseballFixture, Test1)
{
	expect = { 0,0 };
	EXPECT_THROW( base.playgame("45s"), std::invalid_argument);
}

TEST_F(BaseballFixture, Test2)
{
	expect = { 3,0 };
	EXPECT_EQ( base.playgame("123"), expect);
}

TEST_F(BaseballFixture, Test3)
{
	expect = { 0,1 };
	EXPECT_EQ( base.playgame("240"), expect);
}