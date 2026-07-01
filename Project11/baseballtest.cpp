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
	EXPECT_EQ(expect, base.playgame("456"));
}