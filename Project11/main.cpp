#include "gmock/gmock.h"

using namespace testing;

int main()
{
	InitGoogleMock();
	RUN_ALL_TESTS();
	return 0;
}