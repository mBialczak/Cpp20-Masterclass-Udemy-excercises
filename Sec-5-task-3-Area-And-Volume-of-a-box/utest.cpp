#include <gtest/gtest.h>

#include "box-calcs.hpp"

TEST(BaseAreaTest, ReturnsZeroWhenAnyOfArgsIsZero)
{
    EXPECT_EQ(BaseArea(0, 2.0), 0);
    EXPECT_EQ(BaseArea(4.0, 0), 0);
    EXPECT_EQ(BaseArea(0, 0), 0);
}